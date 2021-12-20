/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int count,freq;
    scanf("%s",&a);
    for(int i=0;i<strlen(a);i++)
    {
        count=1;
        for(int j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]='0';
            }
        }
        if(a[i]!='0')
            printf("%c letter freq is  %d \n",a[i],count);                  //printf("%c",a[i]);  (to remove duplicates)
        
    }

    return 0;
}


