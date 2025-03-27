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

**Expected Output:**
```
==589== HEAP SUMMARY:
==589==     in use at exit: 0 bytes in 0 blocks
==589==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==589==
==589== All heap blocks were freed -- no leaks are possible
==589==
==589== For lists of detected and suppressed errors, rerun with: -s
==589== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

## Flowchart

<img >

## Collaborators

- [Julien PULON](https://github.com/JulienPul)
- [Clémence MEYNET](https://github.com/cmeynet)

---
