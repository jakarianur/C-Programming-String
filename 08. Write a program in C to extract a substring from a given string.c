#include <stdio.h>
int main()
{
   int pos, len, c;
   char str[100],subs[100];
   printf("Enter a string: \n");
   fgets (str, sizeof(str), stdin);
   printf("Enter position of the extracted string: \n");
   scanf("%d", &pos);
   printf("Enter length of the extracted string: \n");
   scanf("%d", &len);
   c=0;
   while (c<len)
   {
       subs[c]=str[pos+c];
       c++;
   }
       subs[c]='\0';
       printf("\nThe string after extraction: %s\n", subs);
    return 0;
}
