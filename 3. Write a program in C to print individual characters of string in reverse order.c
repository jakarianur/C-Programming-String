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
printf("\n Individual character for this string Reverse: \n");
for (int i = length -1; i>=0; i--)
{
  printf (" %c\n", str[i]);
}
return 0;
}
