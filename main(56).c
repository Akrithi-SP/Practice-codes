/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char a[]="akrithi is my name";
    //char res[1000]="";
    int temp[256]={0};
    for(int i=0;a[i]!='\0';i++)
    {
        temp[a[i]]++;
    }
    for(int i=0;i<256;i++)
    {
    if(temp[i]==1)
        {
            printf("%c",i);
        }
    }

    return 0;
}


