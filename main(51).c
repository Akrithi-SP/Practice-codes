/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************
-----explaination--------
3+2+4+5=1=14
1+4=5
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a=3245,rem,sum=0,rem1,sum1=0;
    while((a/10)!=0)
    {
        sum=0;
    while(a!=0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    a=sum;
    }
    
    //printf("%d",sum);
    
   /* while(sum!=0)
    {
        rem1=sum%10;
        sum1=sum1+rem1;
        sum=sum/10;
    }
    */
    printf("result -- %d",sum);
    return 0;
}

