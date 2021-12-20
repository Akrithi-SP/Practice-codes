/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int num,rem,sqr,sr;
    printf("enter any number: ");
    scanf("%d",&num);
    
    sqr=pow(num,2);    // to get the square of a number
    printf("the square of %d is %d\n",num,sqr);
    
    if(sqr>0)
        sr=sqr%10;        // to get last number of a square
    if(num>0)
        rem=num%10;       // to get the last number of a number
    
    printf("%d is the last no. of sqr\n",sr);
    printf("%d is the last no. of a number\n",rem);
        
    if(sr==rem)
    {
        printf("yes, %d is an automorphic number",num);
    }
    else
    {
        printf("no, %d is not an automorphic number",num);
    }
    return 0;
}


