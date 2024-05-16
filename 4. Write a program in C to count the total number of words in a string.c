#include <stdio.h>
int main()
{
char str[100];
int i, total = 0;
printf("\nEnter a string: ");
fgets (str, sizeof(str), stdin);
for (i=0; str[i] != '\0'; i++)
{
    if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ){
        total++;
        }
    }
printf("\n Total Word has this string: %d\n", total);
return 0;
}
