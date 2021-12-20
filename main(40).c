/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],b[100],n;
    printf("enter the no.of elements in an array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    //b[100]=0;
    int x=0;
    for(int i=n-1;i>=0;i--)
    {
        b[x++]=a[i];
    }
     printf("the reversed array is\n");
    for(int i=0;i<n;i++)
    {
       
        printf("a[%d]=%d\n",i,b[i]);
    }
    
    return 0;
}
