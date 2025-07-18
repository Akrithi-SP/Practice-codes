/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************
 question ---> 
 given an array (arr) of size 'n', where arr[k]<arr[j] such that k<j 
 find the maximum index difference j-k
  
 eg: arr= 31 10 21 20 22
 output: 3
  explaination: difference = 4(index of 22)-1(index of 10) =3
  
 */
 
 
 
#include <stdio.h>

int main()
{
    int n,arr[100000],index_l,index_s,diff,smallest,largest;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
            index_l=i;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
            index_s=i;
        }
    }
    
    for(int i=index_s;i<=index_l;i++)
    {
        for(int j=i+1;j<=index_l;j++)
        {
            if(i<j && arr[i]<arr[j])
            {
                        diff=index_l-index_s;
                
            }
            
        }
    }

printf("%d",diff);
    return 0;
}

