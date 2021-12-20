/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],letter;
    int count=0;
    scanf("%s",&s);
    scanf("%s",&letter);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==letter)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}