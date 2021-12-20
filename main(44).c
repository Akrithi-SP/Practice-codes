/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],n,temp1,temp2;
    printf("enter the no.of elements in an array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    //sorting in ascending order
     for(int i=0;i<(n/2)-1;i++)
 {
  for(int j=i+1;j<(n/2);j++)
  {
   if(a[i]>a[j])
   {
    temp1 = a[i];
    a[i] = a[j];
    a[j] = temp1;
   }
  }
 }
 //sorting in an descending order
     for(int i=n/2;i< n-1;i++)
 {
  for(int j=i+1;j< n;j++)
  {
   if(a[i]<a[j])
   {
    temp2 = a[i];
    a[i] = a[j];
    a[j] = temp2;
   }
  }
 }
    printf("the sorted array is ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

