#include <stdio.h>
int main()
{
    int i;
    char str1[100], str2[100];
    printf("Enter string 1: \n");
    fgets(str1, sizeof(str1), stdin);
     printf("Enter string 2: \n");
    fgets(str2, sizeof(str2), stdin);
    while(str1[i]==str2[i] && str1[i]!='\0')
    {
        i++;
    }
    if (str1[i] > str2[i])
    {
        printf("\nString 1 > Srting 2\n");
    }
    else if (str1[i] < str2[i])
    {
        printf("\nString 1 < Srting 2\n");
    }
    else
    {
        printf("\nString 1 = Srting 2\n");
    }
    return 0;
}
