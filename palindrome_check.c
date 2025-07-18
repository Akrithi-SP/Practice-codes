/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,rem,temp,rev=0;
    scanf("%d",&num);
    temp=num;
    printf("given number is %d\n",temp);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("reversed number is %d\n ",rev);
    if(temp==rev)
    {
        printf("Hence it is a palindrome number");
    }
    else
    {
        printf("Hence it is not a palindrome number");
    }

    return 0;
}

