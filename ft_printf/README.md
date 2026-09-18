*This project has been created as part of the 42 curriculum by pspuhler.*

# 🖨️ ft_printf

## 🛸 Description
**ft_printf** is a project from the 42 common core curriculum where the goal is to recode the iconic `printf()` function from the standard C library. It introduces variadic functions using `<stdarg.h>`, allowing the program to handle a variable number of arguments. Buffer management of the original `printf` is explicitly omitted[cite: 1], and output is handled directly via `write()`[cite: 1]. The project successfully handles mandatory conversions: `cspdiuxX%`[cite: 1].

## 🧠 Algorithm & Data Structure Justification
* **Recursive Number Conversion:** For base conversions (`%d`, `%i`, `%u`, `%x`, `%X`)[cite: 1], a recursive approach was chosen instead of large heap buffers. Numbers are divided recursively by their base (10 or 16) down to single digits, printing them sequentially with `write()`[cite: 1]. This ensures a minimal memory footprint, strict compliance with allowed functions (`malloc`, `free`, `write`)[cite: 1], and precise counting of written characters.
* **Modular Parsing Architecture:** The parser iterates through the format string character by character. Upon detecting a `%`, it routes the format specifier to dedicated modular functions, keeping functions small, maintainable, and fully compliant with the 42 Norm[cite: 1].

## 🚀 Instructions & Compilation
The project includes a Makefile adhering to standard 42 requirements (rules: `all`, `clean`, `fclean`, `re`)[cite: 1]. The static library `libftprintf.a` is built at the root of the repository using `ar`[cite: 1].

| Command | Action |
| :--- | :--- |
| `make` | Compiles source files and creates `libftprintf.a` at the root[cite: 1]. |
| `make clean` | Removes all object (`.o`) files[cite: 1]. |
| `make fclean` | Removes object files and the `libftprintf.a` binary[cite: 1]. |
| `make re` | Triggers a full rebuild (`fclean` followed by `make`)[cite: 1]. |

### Usage in C Projects
Include the header file in your code:
```c
#include "ft_printf.h"
```

Compile your project linking the library:
```
cc -Wall -Wextra -Werror main.c libftprintf.a -o program
```

## 🔮 Resources & AI Usage
*   **Ressources:** man 3 printf, man 3 stdarg, and standard C programming documentation.

*   **AI Usage:** Gemini was used as a collaborative tool to review my Makefile syntax rules and hex conversion logic.