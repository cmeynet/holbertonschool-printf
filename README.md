# _printf - Custom Implementation of printf

## Description

`_printf` is a custom implementation of the standard `printf` function in C. It provides formatted output capabilities, handling specifiers for characters, strings, integers, and percentages. The function processes format specifiers in a format string and outputs corresponding values.

## Compilation

To compile `_printf`, use the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
```

## Requirements

- Ubuntu 20.04 LTS or later
- GCC (GNU Compiler Collection)
- `git` for version control

## Usage Examples

Below are some examples demonstrating how to use `_printf` and their expected outputs:

```c
#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, world!");
    _printf("Integer: %d\n", 42);
    _printf("Percentage: %%\n");
    return (0);
}
```

**Expected Output:**
```
Character: A
String: Hello, world!
Integer: 42
Percentage: %
```

## Man Page

To access the manual page for `_printf`, run:

```sh
man ./man_3_printf
```

## Testing

To ensure correctness, `_printf` can be tested with various inputs. A set of test cases should be created and executed.

Example test:

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    int len1, len2;

    len1 = _printf("Testing %d\n", 100);
    len2 = printf("Testing %d\n", 100);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);
    return (0);
}
```

### Memory Leak Checks

Use `valgrind` to detect memory leaks:

```sh
valgrind --leak-check=full --track-origins=yes ./printf
```

## Flowchart

Below is a simple flowchart of `_printf` execution:

1. Start
2. Parse the format string
3. Identify format specifiers
4. Call corresponding function to handle specifier
5. Print output
6. Return total printed characters
7. End

(You can create a visual representation using a tool like draw.io, Mermaid.js, or ASCII art.)

## Collaborators

- Julien PULON
- Clémence MEYNET

---

This README provides an overview of the `_printf` function, including its usage, compilation, testing, and debugging methods.


