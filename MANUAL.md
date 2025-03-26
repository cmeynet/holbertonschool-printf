Custom Implementation Manual

## NAME
_printf - custom formatted output conversion function

## SYNOPSIS
```c
#include "main.h"

int _printf(const char *format, ...);
```

## DESCRIPTION
The `_printf()` function is a custom implementation of the standard `printf()` function. It produces output according to a format string that specifies how subsequent arguments are converted for output.

### SUPPORTED CONVERSION SPECIFIERS
- `%c`: Print a single character
- `%s`: Print a string
- `%%`: Print a percent sign
- `%d`: Print a decimal integer
- `%i`: Print an integer

## PARAMETERS
- `format`: A string that specifies the output format
- `...`: Variable number of arguments to be printed

## RETURN VALUE
Returns the total number of characters printed (excluding the null terminator).

## FUNCTION BEHAVIOR
- Iterates through the format string
- When `%` is encountered, looks for a matching conversion specifier
- If no matching specifier is found, prints `%` followed by the character
- Handles characters outside of conversion specifiers normally

## EXAMPLES
```c
_printf("Hello, %s!", "world");        // Prints: Hello, world!
_printf("%c is a character", 'A');     // Prints: A is a character
_printf("Number: %d", 42);             // Prints: Number: 42
_printf("Percent: %%");                // Prints: Percent: %
```

## ERROR HANDLING
- Handles unknown specifiers by printing `%` and the character
- Returns the number of characters printed
- No explicit error reporting

## IMPLEMENTATION DETAILS
- Uses a `print_t` structure to map specifiers to print functions
- Utilizes variadic argument handling with `va_list`
- Requires custom `_putchar()` implementation
- Uses `specifier_exist()` to find matching print functions

## BUGS
- Limited conversion specifier support
- Minimal error checking
- No floating-point or advanced type support

## SEE ALSO
printf(3), main.h

## NOTES
- Designed as a simplified version of standard `printf()`
- Educational implementation for learning purposes
- Not recommended for production use
