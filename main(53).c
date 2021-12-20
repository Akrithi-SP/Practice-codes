/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main() {
   char a[]="level level dgdfgf lewel lewwel";
   char word[20]="";
   int count=0;
   for(int i=0;i<=strlen(a);i++){
       if(a[i]!=' ' && a[i]!='\0')
       {
           strncat(word,&a[i],1);
       }
       else{
       int start=0;
       int end=strlen(word)-1;
       int flag=0;
       while(start<=end){
           if(word[start++]==word[end--])
           continue;
           else
           {
               flag=1;
               break;
           }
           
       }
       strcpy(word,"");
       if(!flag){
           count++;
       }
       }
       }
       printf("%d",count);
   }
