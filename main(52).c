/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int t=4;
    int n;                     
    while(t--){               //to take 4 inputs
        scanf("%d",&n);
        int sum=0;
        int rem;
        int i=1;
        while(n!=0){
            rem=n%2;
            n=n/2;
            sum=rem*i+sum;
            i=i*10;
        }
        printf("%d\n",sum);
    }
}
