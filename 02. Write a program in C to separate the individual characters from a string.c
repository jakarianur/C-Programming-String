#include <stdio.h>
int main()
{
char str[100];
printf("\nEnter a string: ");
scanf( "%s",str);
printf("\nIndividual character for this string: \n");
for (int i =0; str[i] != '\0'; i++)
{
  printf ("%c\n", str[i]);
}
return 0;
}
