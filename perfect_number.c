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
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    printf("sum of all the divisors of a number is %d\n",sum);
    if(sum==num)
    {
        printf("Hence %d is a perfect number",num);
    }
    else
    {
        printf("Hence %d is not a perfect number",num);
    }

    return 0;
}

