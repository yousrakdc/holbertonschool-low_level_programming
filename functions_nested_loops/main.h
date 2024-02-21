#ifndef MAIN_H
#define MAIN_H

/* _putchar - writes the character c to stdout */
int _putchar(char c);

#endif /* MAIN_H */

int print_alphabet(void);
{
        char letter = 'a';

        while (letter <= 'z')
        {
                putchar(letter);
                letter++;
        }
        putchar('\n');
        return (0);
}
