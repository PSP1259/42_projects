#include "ft_printf.h"
#include <stdio.h> // to compare

int	main(void)
{
	int		f_mine;
	int		f_orig;
	int		x = 42; 		// for %p

	// Test 1: Char (%c)
	printf("--- Test 1: Char ---\n");
	f_mine = ft_printf("My ft_printf: Letter %c\n", 'A');
	f_orig = printf("Origi printf: Letter %c\n", 'A');
	printf("Output -> Mine: %d | Original: %d\n\n", f_mine, f_orig);

	// Test 2: String (%s)
 	printf("--- Test 2: String ---\n");
	f_mine = ft_printf("My ft_printf: Letter %s\n", "Hola");
	f_orig = printf("Origi printf: Letter %s\n", "Hola");
	printf("Output -> Mine: %d | Original: %d\n\n", f_mine, f_orig);

	// Test 3: Pointer (%p)
    printf("--- Test 3: Pointer ---\n");
    f_mine = ft_printf("My ft_printf: Pointer %p\n", &x);
    f_orig = printf("Origi printf: Pointer %p\n", &x);
    printf("Output -> Mine: %d | Original: %d\n\n", f_mine, f_orig);

	// Test 5: Dezimalzahlen (%d / %i)
	printf("--- Test 5: Dezimal & Integer ---\n");
	f_mine = ft_printf("My ft_printf: Num %d and %i\n", 42, -120);
	f_orig = printf("Origi printf: Num %d and %i\n", 42, -120);
	printf("Output -> Mine: %d | Original: %d\n\n", f_mine, f_orig);
	return (0);
}
