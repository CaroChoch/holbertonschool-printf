# HOLBERTON SCHOOL PROJECT : printf - C

Here is the first group project at Holberton School.

## Objective :

The objective of this project is to create our own version named _printf, of the C library function printf.

## Description :

We write a function that produces output according to a format.

- Here is the prototype: `int _printf(const char *format, ...);`

- Returns: the number of characters printed (excluding the null byte used to end output to strings).

- We write output to stdout, the standard output stream.

- The format is a character string. The format string is composed of zero or more directives.

- We handle the following conversion specifiers :

| Function name | Description | Format specifiers | File name | Example | Output |
|:-------------:|:----------:|:-------------:|:------------:|:------:|:----:|
| print_char | Prints a single character | %c | [print_char.c](https://github.com/CaroChoch/holbertonschool-printf/blob/main/print_char.c)| _printf("%c", 'R') | R |
| print_string | Prints a string | %s | [print_string.c](https://github.com/CaroChoch/holbertonschool-printf/blob/main/print_string.c) | _printf("%s", 'Hello, World !' | Hello, World ! |
| print_percent | Prints a percent sign | %% | [print_percent.c](https://github.com/CaroChoch/holbertonschool-printf/blob/main/print_percent.c) | _printf("%%") | % |
| print_integer | Prints an integer in base 10 | %d  or  %i  | [print_integer.c](  https://github.com/CaroChoch/holbertonschool-printf/blob/main/print_integer.c) | _printf("%d", '100')   or   printf("%i", '100') | 100 |
| print_binary | Prints the binary form of the integer | %b | [print_binary.c]( ) | _printf("%b", '98') | 1100010 |

## Our flowchart

![flowchart](https://github.com/CaroChoch/holbertonschool-printf/blob/main/flowchart.svg)

## Compilation

Our code can be compiled on Ubuntu 20.04 LTS by this way :

    $ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
    
## Testing the Program

#### The main.c File Test

Here is an example of test file `main.c` that you could use :

    alex@ubuntu:~/c/printf$ cat main.c 
    #include <limits.h>
    #include <stdio.h>
    #include "main.h"
    
    /**
     * main - Entry point
     *
     * Return: Always 0
     */
     
     int main(void)
     {
     int len;
     int len2;
     unsigned int ui;
     void *addr;
    
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
    }

#### Output Check

Your output should after compiling the program should look something like what's displayed below.

By typing the following command : ./a.out , you should get :

    Let's try to printf a simple sentence.
    Let's try to printf a simple sentence.
    Length:[39, 39]
    Length:[39, 39]
    Negative:[-762534]
    Negative:[-762534]
    Unsigned:[2147484671]
    Unsigned:[2147484671]
    Unsigned octal:[20000001777]
    Unsigned octal:[20000001777]
    Unsigned hexadecimal:[800003ff, 800003FF]
    Unsigned hexadecimal:[800003ff, 800003FF]
    Character:[H]
    Character:[H]
    String:[I am a string !]
    String:[I am a string !]
    Address:[0x7ffe637541f0]
    Address:[0x7ffe637541f0]
    Percent:[%]
    Percent:[%]
    Len:[12]
    Len:[12]
    Unknown:[%r]
    Unknown:[%r]
    

## Authors

- Caroline CHOCHOY  @CaroChoch
- Mustapha Rayane Elkefif  @rayaneRX


