#ifndef MAIN_H
#define MAIN_H

/* _putchar - writes the character c to stdout */
int _putchar(char c);

#endif /* MAIN_H */

void print_alphabet(void);

{
        char letter = 'a';

        while (letter <= 'z')
        {
                _putchar(letter);
                letter++;
        }

        _putchar('\n');
        return (0);
}
