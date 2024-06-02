#include <stdio.h>
int main()
{
    int i;
    char str[100];
    printf("Enter your string: \n");
    fgets(str, sizeof(str), stdin);
for (i = 0; str[i] != '\0'; i++)
{
    if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i]=str[i] + 32;
        }
    else if (str[i] >= 'a' && str[i] <= 'z')
    {
            str[i]=str[i] - 32;
    }
}
            printf("After replacing, this string is: %s\n", str);
    return 0;
}
