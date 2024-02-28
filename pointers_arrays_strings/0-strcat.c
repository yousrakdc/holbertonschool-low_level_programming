#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * Return: always success
 */
char *_strcat(char *dest, char *src)
{
        strcat(*dest, *src);
        int i = 0;
        while (*dest[i] != '\0')
        {
                putchar(*dest[i]);
                i++;
        }
        putchar('\n');
        putchar(0);
}
