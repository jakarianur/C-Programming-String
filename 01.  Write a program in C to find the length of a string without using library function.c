#include <stdio.h>
int main()
{
char str[100];
int length = 0;
printf("\nEnter a string: ");
scanf( "%s",str);
while (str [length] != '\0')
{
    length++ ;
}
printf ("\nLength of this string: %d \n", length);
return 0;
}
