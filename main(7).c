/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,bin=0,base=1,rem;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%2;
        bin=bin+rem*base; // important logic
        num=num/2;
        base=base*10;
    }
    printf("%d",bin);
    return 0;
}

