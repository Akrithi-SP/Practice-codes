/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int num,rem,x=0,count;
    scanf("%d",&num);
    count=log10(num)+1;
    int new[count];
    while(num!=0)
    {
        rem=num%10; //extracting the last digit
        new[x++]=rem; //storing in reverse order --new[]
        num=num/10;
    }
    printf("the result after replacing all 0's with 1's is :\n");
    for(int i=count-1;i>=0;i--) // reading new in reverse order to get the correct integer
    {
        if(new[i]==0)
        {
           new[i]=1;            // if digitis 0 replacing it with 1
           printf("%d",new[i]);
        }
        else
        {
            printf("%d",new[i]);
        }
    }
    return 0;
}

