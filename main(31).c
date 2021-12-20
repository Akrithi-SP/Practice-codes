/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int num,rem[100],x=0,y,count=0;
    scanf("%d",&num);
    while(num!=0)
    {
        rem[x++]=num%10;
        count++;
        num=num/10;
    }
    for(int i=count-1;i>=0;i--)
    {
        y=rem[i];
        switch(y)
        {
        case 0: printf("zero ");
                break;
        case 1: printf("one ");
                break;
        case 2: printf("two ");
                break;
        case 3: printf("three ");
                break;
        case 4: printf("four ");
                break;
        case 5: printf("five ");
                break;
        case 6: printf("six ");
                break;
        case 7: printf("seven ");
                break;
        case 8: printf("eight ");
                break;
        case 9: printf("nine ");
                break;
        default: printf("not valid ");
                break;
        }
    }
    return 0;
}