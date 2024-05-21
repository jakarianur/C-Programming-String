#include <stdio.h>
int main()
{
    char str[50];
    int frequency[256] = {0};
    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        frequency[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] > 0 && i != ' ' && i != '\t' && i != '\n')
        {
            printf("%c has occurred %d times\n", i, frequency[i]);
        }
    }
    return 0;
}
