#include <stdio.h>
int main()
{
    char str1[100], str2[100] ;
    int i;
    printf("Enter your first string: \n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter your second string: \n");
    fgets(str2, sizeof(str2), stdin);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
        printf("After copying, this string is: %s\n", str2);
    return 0;
}
