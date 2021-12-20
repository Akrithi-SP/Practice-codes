/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int first , last,sum;
    scanf("%d",&first);
    scanf("%d",&last);
    for(int i=first;i<=last;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);

    return 0;
}
