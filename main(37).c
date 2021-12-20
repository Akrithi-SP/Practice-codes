/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char  a[100];
    scanf("%s",&a);
    int temp[256]={0};
    
    for(int i=0;a[i]!='\0';i++)
    {
        temp[a[i]]++;
        if(temp[a[i]]==1)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}


