#include<stdio.h>
#include<string.h>
void main(){
    int len=0, flag=0;
    char string[50];
    printf("Enter string:");
    scanf("%s",string);

    for(int i=0; string[i] != '\0' ; i++)
    {
        len+=1;
    }
    

    for(int i=0; i<len;i++)
    {
        if(string[i]!=string[len-1-i])
        {
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}
