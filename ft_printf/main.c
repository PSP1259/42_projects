#include "ft_printf.h"
#include <stdio.h> // to compare

int	main(void)
{
	int		f_mine;
	int		f_orig;

	// Test 1: Char (%c)
	printf("--- Test 1: Char ---\n");
	f_mine = ft_printf("My ft_printf: Letter %c\n", 'A');
	f_orig = printf("Original printf: Letter %c\n", 'A');
	printf("Output -> Mine: %d | Original: %d\n\n", f_mine, f_orig);

	// Test 2: String (%s)
 	printf("--- Test 2: String ---\n");
	f_mine = ft_printf("My ft_printf: Letter %s\n", "Hola");
	f_orig = printf("Original printf: Letter %s\n", "Hola");
	printf("Output -> Mine: %d | Original: %d", f_mine, f_orig);

	return (0);
}
