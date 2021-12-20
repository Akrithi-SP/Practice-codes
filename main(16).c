/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


/*abundancy index --- the ratio between the sum of divisors of a number and the number itself
friendly pair --- if two numbers abundancy index are equal */

#include <stdio.h>

int main()
{
    int num1,num2,sum1=0,sum2=0;
    int s1,s2;
    printf("enter any two numbers: ");
    scanf("%d %d",&num1,&num2);
    for(int i=1;i<=num1;i++)
    {
        if(num1%i==0)
        {
            sum1=sum1+i;
        }
    }
    printf("sum of divisors of %d is %d \n",num1,sum1);
    for(int j=1;j<=num2;j++)
    {
        if(num2%j==0)
        {
            sum2=sum2+j;
        }
    }
    printf("sum of divisors of %d is %d \n",num2,sum2);
    
    s1=sum1/num1;
    printf("%d is abundancy index of %d\n",s1,num1);
    
    s2=sum2/num2;
    printf("%d is abundancy index of %d\n",s2,num2);
    
    if(s1==s2)
    {
        printf("Hence %d and %d are friendly pairs",num1,num2);
    }
    else
    {
        printf("Hence %d and %d are not firendly pairs",num1,num2);
    }

    return 0;
}

