#include <stdio.h>
#include <ctype.h>
int main()
{
char str[100];
int i, alphabet=0, digit=0, special=0;
printf("\nEnter a string: ");
fgets (str, sizeof(str), stdin);
for (i=0; str[i] != '\0'; i++)
{
    if (isalpha str[i])
    {
        alphabet++;
    }
    else if (isdigit str[i])
    {
        digit++;
    }
    else if (str[i] = ' ' && )
    {
        special++;
    }
}
while (str1[i] != '\0')
	{
		str3[j] = str1[i];
		i++;
		j++;
	}
		i = 0;
		str3[j]= ' ';
		j++;
while (str2[i] != '\0')
	{
		str3[j] = str2[i];
		i++;
		j++;
	}
		str3[j] = '\0';
	printf("Concatenated String: %s", str3);
	return 0;
}
