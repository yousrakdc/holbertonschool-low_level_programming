#include<stdio.h>
int main(void)
{char charType;
int intType;
long int  longintType;
long long int longlongintType;
float floatType;

printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of a long longi nt: %zu bytes\n", sizeof(longlongintType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
