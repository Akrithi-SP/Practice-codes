/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,sum=0;
    printf("enter any number: ");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            //printf("%d\n",i);
            sum=sum+i;
        }
    }
    
    printf("%d is the sum of all divisors of %d\n ",sum,num);
    if(sum>num)
    {
        printf("Yes, %d is an abundant number",num);
        
    }
    else
    {
        printf("no, %d is not an abundant number",num);
    }
    return 0;
}
