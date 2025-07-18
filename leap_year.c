/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0)) || (year%400==0))
        printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);

    return 0;
}
