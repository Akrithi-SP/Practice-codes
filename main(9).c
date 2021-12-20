/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void f(int *p,int *q)
{
    p=q;
    *p=2;
}
int i=0,j=1;
int main()
{
    f(&i,&j);
    printf("%d %d \n",i,j);
    getchar();

    return 0;
}
