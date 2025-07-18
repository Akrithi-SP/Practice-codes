/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,num3,rem1,rem2,rem3,l1=0,l2=0,l3=0,sl1=0,sl2=0,sl3=0,l_sum=0,sl_sum=0,diff=0;
    scanf("%d%d%d",&num1,&num2,&num3);
    while(num1!=0)
    {
        rem1=num1%10;
        if(rem1>l1)
        {
            sl1=l1;
            l1=rem1;
            
        }
        else if(rem1>sl1)
        {
            sl1=rem1;
        }
            
        num1=num1/10;
            
        
    }
    while(num2!=0)
    {
        rem2=num2%10;
        if(rem2>l2)
        {
            sl2=l2;
            l2=rem2;
        }
        else if(rem2>sl2)
        {
            sl2=rem2;
        }
        num2=num2/10;
    }
    while(num3!=0)
    {
        rem3=num3%10;
        if(rem3>l3)
        {
            sl3=l3;
            l3=rem3;
        }
        else if(rem3>sl3)
        {
            sl3=rem3;
        }
        num3=num3/10;
    }
    l_sum=l1+l2+l3;
    sl_sum=sl1+sl2+sl3;
    diff=(l_sum)-(sl_sum);
    printf("%d",diff);
    return 0;
}



