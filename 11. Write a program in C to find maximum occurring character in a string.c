#include <stdio.h>
#include <string.h>
int main()
{
    int i, length, max = -1;
    char str[100], result;
    int used[256] = {0};
    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    length = strlen(str);
for (i = 0; i < length; i++)
{
    used[(unsigned char)str[i]]++;
}
for (i = 0; i < 256; i++)
    {
        if (used[i] > max)
        {
            max = used[i];
            result = (char)i;
        }
    }
    printf("The maximum occurring character of the given string is: %c\n", result);
    return 0;
}
