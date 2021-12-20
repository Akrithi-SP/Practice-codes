/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int base,exponent,power=1;
   printf("enter the base\n");
   scanf("%d",&base);
   printf("enter the exponent\n");
   scanf("%d",&exponent);
   for(int i=1;i<=exponent;i++)
   {
       power=base*power;
   }
   printf("%d to the power %d is %d",base,exponent,power);

    return 0;
}
