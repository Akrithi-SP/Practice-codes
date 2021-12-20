/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int rows;
    scanf("%d ",&rows);
    for(int i=0;i<rows;i++)
    {
        for(int j=5;j>=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
