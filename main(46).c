/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int factorial(int);
int main()
{
    int num,rem,sum=0,fact,temp;
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        fact=factorial(rem);
        sum=sum+fact;
        num=num/10;
    }
    printf("sum of factorial of digits of %d is %d\n",temp,sum);
    if(sum==temp)
    {
        printf(" Hence %d is a strong number",temp);
    }
    else
    {
        printf("Hence %d is not a strong number",temp);
    }
    return 0;
}

int factorial(int num)
{
    int n=1;
    for(int i=1;i<=num;i++)
    {
        n=n*i;
    }
    //printf("%d",n);
    return n;
}

