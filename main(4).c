/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
  
    int start,end,rem,n,n1,mul,sum,count;
    scanf("%d %d",&start,&end);
    for(int a=start;a<=end;a++)
    {
    sum=0;count=0;   
    n=a;
    n1=a;
   int temp=a;
   
    while(n!=0)
    {
        //rem=n%10;
        count++;
        n=n/10;
    }
   
    while(temp!=0)
    {
        rem=temp%10;
        mul=1;
        for(int i=1;i<=count;i++)
        {
            mul=mul*rem;
        }
       
        temp=temp/10;
        sum=sum+mul;
    }
   
    
    
   
    if(sum==n1)
    {
        printf("%d is an armstrong number\n",a);
    }
    
    }
    return 0;


}


*******************************************************
//optimized code

#include <stdio.h>
#include<math.h>

int main()
{
    
  
    int start,end,rem,n,n1,mul,sum,count;
    scanf("%d %d",&start,&end);
    for(int a=start;a<=end;a++)
    {
    sum=0;count=0;   
    n=a;
    n1=a;
   int temp=a;
   count=log10(a)+1;
   /* while(n!=0)
    {
        //rem=n%10;
        count++;
        n=n/10;
    }*/
   
    while(temp!=0)
    {
        rem=temp%10;
        mul=1;
        mul=pow(rem,count);
       /* for(int i=1;i<=count;i++)
        {
            mul=mul*rem;
        }
       */
        temp=temp/10;
        sum=sum+mul;
    }
   
    
    
   
    if(sum==n1)
    {
        printf("%d is an armstrong number\n",a);
    }
    
    }
    return 0;


}

