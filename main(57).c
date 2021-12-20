/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
#include <stdio.h>

int main()
{
    int a[10],n,s,ss;
    printf("enter no of elements: ");
    scanf("%d",&n);
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[0];
    ss=a[1];
    for(int i=2;i<n;i++)
    {
        if(a[i]<s)
        {
            ss=s;
            s=a[i];
        }
        else if(a[i]<ss)
        {
            ss=a[i];
        }
    }
    printf("%d is the second smallest number in an array",ss);
    
    return 0;
}


*/
/**********************************************************************
 general case where you can find any element of an array by sorting it in ascending order*/

#include<stdio.h>

int main()
{
 float a[100], temp;
 int i, j, n;
 
 printf("Enter n (>3):");
 scanf("%d", &n);
 //Reading Array 
 printf("Enter numbers:\n");
 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%f",&a[i]);
 }
 /* Sorting array in ascending order */
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(a[i]>a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
 /* Displaying result */
 printf("second smallest = %f ",a[1]);

 return(0);
}


