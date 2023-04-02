#include<stdio.h>
#include<string.h>
void main()
{   int count,len;
    char string[50],ch;
    printf("Enter the string:");
    scanf("%[^\n]s",string);
    getchar();
    printf("Enter the character:");
    scanf("%c",&ch);
    len= strlen(string);
    for(int i=0;i<len; i++)
    {
        if(string[i]==ch || string[i]==ch-32)
        {
            count++;
        }

    }
    printf("The count is %d",count);
}