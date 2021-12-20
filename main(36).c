/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//int p(int,int);
int main()
{
    int x;
    x= p(3,3);
    printf("%d",x);
    return 0;
}

int p(int x, int y)
{
    if(y == 0)
    {
        return 1;
    }
    else if(y%2 == 0)
    {
        return p(x, y/2) * p(x, y/2);
    }
    else
    {
        return x* p(x, y/2)* p(x,y/2);
    }
    
}
