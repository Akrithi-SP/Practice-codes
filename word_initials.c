/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];
   char ns[100]="";
   gets(s);
   strncat(ns,&s[0],1);
  
   for(int i=0;i<strlen(s)-1;i++){
       if(s[i]==' '){
           
       strncat(ns,&s[i+1],1);
      
       }
       
       
   }
  
   printf("%s",ns);
}
