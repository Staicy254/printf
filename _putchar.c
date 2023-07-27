#include "main.h"

/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 * By: Jean and Delorise
 * Return: On success 1
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar (char c)
{
return (write(1, &c, 1));

}
