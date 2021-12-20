/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>

int main()
{
    int  n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int temp[256]={0};
    int j=0;
    
    for(int i=0;i<n;i++)
    {
        temp[a[i]]++;
        //printf("%d",temp);
        if(temp[a[i]]==1)
        {
            b[j++]=a[i];
        }
    }
    printf("\n");
     for(int i=0;i<j;i++)
    {
       
           printf("%d-%d\n",b[i],temp[b[i]]);
           //particular number da frequency ora print anda kudora print aware balli so temp=0malpun
           
       
    }
    return 0;
}


