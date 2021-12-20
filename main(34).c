/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int start,end,nrs=0,count=0;
    scanf("%d %d",&start,&end);
    printf("prime numbers between %d and %d are\n",start,end);
    for(int i=start;i<=end;i++)
    {
        nrs=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                nrs++;
            }
        }
        if(nrs==2)
        {
            printf("%d\n ",i);
            count++;
            
        }
        
        
    }
    printf("Hence there are %d prime numbers from %d to %d",count,start,end);
     return 0;
}
