/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int limit,first=0,second=1,next;
   scanf("%d",&limit);
    printf("%d %d  ",first,second);
   for(int i=0;i<limit-2;i++)
   {
       next=first+second;
       first=second;
       second=next;
      
       printf("%d  ",next);
   }

    return 0;
}
