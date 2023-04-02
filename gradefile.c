#include<stdio.h>
char grade(int mark);
void main()
{
    FILE *fp;
    int mark;
    fp=fopen("gradefile.txt","r");
    fscanf(fp,"%d",&mark);
    printf("The grade of student is: %c",grade(mark/10));
}
char grade(int mark)
{   char result;
    switch(mark)
    {
        case 9:     
            result='S';
            return result;
        case 8:     
            result='A';
            return result;
        case 7:     
            result='B';
            return result;
        case 6:     
            result='C';
            return result;
        case 5:     
            result='D';
            return result;
        case 4:     
            result='F';
            return result;
        case 3:     
            result='F';
            return result;
        case 2:     
            result='F';
            return result;
        case 1:     
            result='F';
            return result;
        default:    return 'N';

    }
}