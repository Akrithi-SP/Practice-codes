/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
   int n;
   
   scanf("%d",&n);
   while(n>0){
       n--;
       char a[10000];
       char even[6000]="";
       char odd[6000]="";
      scanf("%s",a);
       //int x=0;
       //int y=0;
       for(int i=0;a[i]!='\0';i++)
          {
              if(i%2==0){
                 // even[x++]=a[i];
                 strncat(even,&a[i],1);
                  
              }
              else {
              //odd[y++]=a[i];
              strncat(odd,&a[i],1);
              }
          }
          printf("%s %s\n",even,odd);
   }
   }
   
   
   
   
   /* ************************************************************************
   
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
   int n;
   
   scanf("%d",&n);
   while(n>0){
       n--;
       char a[10000];
       char even[5000]="";
       char odd[5000]="";
      scanf("%s",a);
       int x=0;
       int y=0;
       for(int i=0;a[i]!='\0';i++)
          {
              if(i%2==0){
                  even[x++]=a[i];
                  
              }
              else {
              odd[y++]=a[i];
              }
          }
          printf("%s %s\n",even,odd);
   }
   }
   
 
   
   */
