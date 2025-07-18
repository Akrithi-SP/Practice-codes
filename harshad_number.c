/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,sum=0,rem,temp;
    printf("enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    
    printf("%d is the sum of its digits\n",sum);
    if(temp%sum==0)
    {
        printf("yes, %d is a Harshad number ",temp);
    }
    else
    {
        printf("no, %d is not a Harshad number",temp);
    }

    return 0;
}
