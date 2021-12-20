/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
  int num,i=1,div=0;
  scanf("%d",&num);
  while (i<=num)
  {
    if(num%i==0)
    {
        //printf("it is not a prime number %d",num);
        div++;
    }
    i++;
  }
    if(div==2)
    {
        printf("%d is a prime number",num);
    }
    else
    {
         printf("%d is not a prime nymber",num);
    }
    
  return 0;
}
