/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],n,largest,smallest;
    printf("enter the no. of elements you want in an array:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    largest=a[0];
    smallest=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    printf("the largest number and smallest number in an array are %d and %d respectively",largest,smallest);
    
    return 0;
}
