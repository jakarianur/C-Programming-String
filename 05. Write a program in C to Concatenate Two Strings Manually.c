
#include <stdio.h>
int main()
{
char str1[100], str2[100],str3[100];
int i,j;
printf("Enter your first string: ");
fgets (str1, sizeof(str1), stdin);
printf("Enter your second string: ");
fgets (str2, sizeof(str2), stdin);

while (str1[i] != '\0') {
		str3[j] = str1[i];
		i++;
		j++;
	}
	i = 0;
	while (str2[i] != '\0') {
		str3[j] = str2[i];
		i++;
		j++;
	}
	str3[j] = '\0';
	printf("Concatenated String: %s", str3);
	return 0;
}
