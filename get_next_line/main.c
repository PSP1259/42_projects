#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* HILFSFUNKTION: Liest einen FD komplett aus und befreit den Speicher */
void test_fd(int fd, const char *name)
{
    char *line;
    int line_count = 1;

    printf("\n--- Reading: %s (FD: %d) ---\n", name, fd);

    // Call GNL until EOF (NULL) -> line for line
    while ((line = get_next_line(fd)) != NULL)
    {
        // Print Two digit number for numbers of lines
		// [] Square Brackets to visiualize the '\n' as well
        printf("Zeile %02d: [%s]\n", line_count++, line);

        // Mandatory: next while-lopp, next line printed
        free(line);
    }
    printf("--- EOF or fail ---\n");
}

int main(int argc, char **argv)
{
    int fd;
    int i;

    // TEST 1: Unvalid FD
    printf("=== TEST 1: Unvalid FD ===\n");
    test_fd(4242, "Unvalid FD");
    test_fd(-1, "FD -1");

    // TEST 2 & 3: Stdin or file
    if (argc == 1)
    {
        // TEST 2: No arguments? -> read from the keyboard (stdin)
        printf("\n=== TEST 2: Standardoutput (stdin) ===\n");
        printf("Enter Text:\n");
        test_fd(STDIN_FILENO, "stdin");
    }
    else
    {
        // TEST 3: Read one or more files
        printf("\n=== TEST 3: Read files ===\n");
        i = 1;
        while (i < argc)
        {
            fd = open(argv[i], O_RDONLY);
            if (fd == -1)
            {
                perror("\nFailed opening the file");
            }
            else
            {
                test_fd(fd, argv[i]);
                close(fd);
            }
            i++;
        }
    }
    return (0);
}
