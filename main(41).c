/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,rem,temp,rev=0;
    scanf("%d",&num);
    temp=num;
    printf("given number is %d\n",temp);
    printf("reversed number is ");
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;     //printf("%d",rem);  or by declaring a variable rev,( rev=rev*10+rem; ) is also FINE!
        num=num/10;
        
    }
    printf("%d",rev);
    

    return 0;
}


