#include <stdio.h>
int main()
{
char str1[100] = "Allah is the",str2[100] = "gretest", str3[100];
int i,j;
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
