### Project Title

***_printf function***

## Description

The function _printf can take multiple arguments in parameter (it take a string in first
then you can have constant variable of type char / char * / int)

The function will translate the other argument parameter in char * and replace the identifier 
keyword in the first string to print a string with no identifier at the end.

### Dependencies

* ISO C89
* ANSI C
* **librairy** : unistd.h / stdlib.h / stdarg.h / stddef.h

### Executing program

* add _printf_header.h in your file that will use the _printf
* don't forget to have add the repository _printf

```c
int _printf(const char *format, ...)
```
example of _printf:
* _printf("constant char * format with format specifier", const int, const char, const string)

# Flow chart

![This How the function work and is read when it's use.](Blank diagram.pdf)

# Format specifier hold

* "%c" is for a ```char```
* "%s" is for a ```char *```
* "%d" is for a ```int```

## Help

Any advise for common problems or issues.
```
if the attempted output is more than 1000 byte the function will not work
```

## Authors

Contributors names and contact info

name : Elliot CHARLET
e-mail : _charlet.elliot@gmail.com_

## License

This project is licensed under the [ELLIOT CHARLET] License


