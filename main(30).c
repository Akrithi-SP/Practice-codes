/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



#include <stdio.h>
#include<math.h>

int main()
{  
   int n;
   scanf("%d",&n);
   int b;
   int a[n];
   for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
       b=pow(a[i],0.5);
       if((b*b)==a[i]){
            printf("%d ",a[i]);
      }
   }
       
}




/*

#include <stdio.h>
#include<math.h>

int main()
{  
   int n;
   scanf("%d",&n);
   int b;
   int a[n];
   for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
       
        for(int j=0;j<=a[i];j++){
            if(j*j==a[i]){
                printf("%d ",a[i]);
                
            }
            else if((j*j)>a[i])
            {
                break;
            }
        }
      }
   
       
}

*/
