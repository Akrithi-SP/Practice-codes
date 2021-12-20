/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N=11,a;
    int A_i[11]={13,16,2,7,3,18,19,6,15,11,17};
    for(int i=0;i<=N;i++)
    {
     for(int j=i+1;j<=N;j++)
     {
         for(int k=j+1;k<=N;k++)
         {
            if(i<j<k)
            {
                if(A_i[i]<A_i[j]<A_i[k])
                {
                    a=A_i[i]+(A_i[j]*A_i[k]);
                    printf(" %d",a);
                }
                
            }
            else
                {
                 printf("-1");
                }
         }
     }
    }
    
    return 0;
}

