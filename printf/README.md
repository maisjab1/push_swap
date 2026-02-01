*This project has been created as part of the 42 curriculum by nibrahee*

# ft_printf

# Description
In C language, printf() function is used to print formatted output to the standard output stdout (which is generally the console screen). and it uses a const char* and variable length arguments as its parameters.
## Syntax of ft_printf
```bash
int ft_printf(const char *, ...);
```
### parameter
- formatted_string: It is a string that specifies the data to be printed. It may also contain a format specifier as a placeholder to print the value of any variable or value.
- args...: These are the variable/values corresponding to the format specifier.
### Return Value
- Returns the number of characters printed after successful execution.
- If an error occurs, a negative value is returned.
## Format Specifier
- Format specifiers are special symbols used in printf() and scanf() to specify the type of data being input or output.
- It ensures the correct interpretation of variable values during input/output operations.
- Different specifiers are used for different data types, like:
1. %c : Prints a single character.
2. %s : Prints a string.
3. %p : prints a void * pointer in hexadecimal format.
4. %d : Prints a decimal (base 10) number.
5. %i : Prints an integer in base 10.
6. %u : Prints an unsigned decimal (base 10) number.
7. %x : Prints a number in hexadecimal (base 16) lowercase format.
8. %X : Prints a number in hexadecimal (base 16) uppercase format.
9. %% : Prints a percent sign.

# Instructions
- To use the function just make sure to include the header file: "ft_printf.h"
- To compile and run:

```bash
make
```
- To clean object files:

```bash
make clean
```
- To remove all complied files:

```bash
make fclean
```
- To recompile from scratch:

```bash
make re
```
# Resources
- geeks for geeks.
- github.

# Ai usege
- clarifying theoretical concepts.
- reviewing code structure and logic.
- improving documentation clarity.
