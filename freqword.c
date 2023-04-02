#include <stdio.h>

void main()
{
    int wCount=0, sCount=0;
    char str[500];
    printf("The string is:\n");
    scanf("%[^$]s", str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if(str[i] == '\n')
        {
            wCount++;
            sCount++;
        }
        if(str[i] == ' ')
        {
            wCount++;
        }
    }
    printf("Number of words = %d\nNumber of sentences = %d", wCount, sCount);
}