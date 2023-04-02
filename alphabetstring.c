#include<stdio.h>
#include<string.h>
void main()
{   int count,len;
    char string[50],ch[50];
    printf("Enter the string:");
    scanf("%[^\n]s",string);
    getchar();
    len= strlen(string);
    for(int i=0;i<len; i++)
    {
        if(string[i]>'A' && string[i]<'z')
        {
            printf("%c",string[i]);
        }

    }
    printf("%s", ch);
}