#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - function that copies a string
 * Return: copuy of the string
 */

char *_strncpy(char *dest, char *src, int n)

{
  char *start = dest;

    while (*src && n > 0) 
    {
        *dest++ = *src++;
        n--;
    }

    while (n > 0) 
    {
        *dest++ = '\0';
        n--;
    }

    return start;
}
