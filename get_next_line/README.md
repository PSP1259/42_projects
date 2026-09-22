*This project has been created as part of the 42 curriculum by pspuhler.*

# 📖 get_next_line

## 🛸 Description
`get_next_line` is a project from the 42 common core curriculum that returns a single line read from a file descriptor upon each call. It introduces the concept of **static variables** in C to persist buffer states across function calls without relying on global variables.

## 🧠 Algorithm & Justification
The implementation follows a modular 3-phase cycle to handle arbitrary buffer sizes efficiently without reading whole files into memory:
* **Read & Accumulate:** Reads chunks of `BUFFER_SIZE` bytes using `read()` and concatenates them into a static `stash` buffer until a newline character (`\n`) or EOF is detected.
* **Extract Line:** Allocates and slices the current line from the start of the `stash` up to and including the `\n` (or EOF) for the return value.
* **Clean Stash:** Keeps any leftover characters after the extracted newline in the static buffer for subsequent calls, freeing obsolete allocated memory to prevent leaks.

## 🚀 Instructions & Compilation
The function is compiled together with your project files using `cc` along with the compiler flag `-D BUFFER_SIZE=n`:

```
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c -o gnl
```
## 🔮 Resources & AI Usage

* **Resources:** `man 2 read`, `man 3 malloc`, `man 3 free`, and POSIX file descriptor documentation.
* **AI Usage:** Gemini was used as a thought partner to understand static buffer handling
