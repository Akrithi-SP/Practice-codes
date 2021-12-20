/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main()
{
   char a[20];
   char b[20];
   gets(a);
   gets(b);
   int c;
   int d;
   
   scanf("%d %d",&c,&d);
   
   int len1=strlen(a);
   int len2=strlen(b);
   char r[]="";
   /*
   log10(number) can be used to find the number of digits in number
   example let number be 1=>log10(1)=0 
      let number be 37 log10(37)=1.xxxx 
                    111 log10(111)=2.xxxxx
                    22222 log10(4567)=3.xxxx
                     from above example we can find that number of digits in number can be found 
                     by elimination the fraction part of log10(number) and adding 1 to it
   */
   //step 2 of question..and step 1 is below
    int n=log10(c)+1;
    
    int lr=c/(pow(10,(n-d))); //use examples to understand this
    lr=lr%10;
    int rl=c/(pow(10,(d-1)));
     rl=rl%10;
    
   
   if(len1<len2){
      strncat(r,&b[strlen(b)-1],1);
      strcat(r,a);
      
      
   }
   else if(len1>len2){
        strncat(r,&a[strlen(a)-1],1);
      strcat(r,b);
      
   }
   else{
       int x=strcmp(a,b);
       if(x>0){
         strncat(r,&a[strlen(a)-1],1);
      strcat(r,b);
      
       }
       else{
            strncat(r,&b[strlen(b)-1],1);
            strcat(r,a);
      
       }
   }
   
 

  
  for(int i=0;r[i]!='\0';i++){
     //can use built in function isupper,tolower,toupper
      if(r[i]>='a'){
          r[i]=r[i]-32;//32 since asci value of A=97 and a=65 diff=32
      }
      else{
          r[i]=r[i]+32;
      }
  }
  char ch=(char) (lr+'0');//we cannot concatenate interger, so convert into character
  char ch1=(char) (rl+'0');
  
  strncat(r,&ch,1);
  strncat(r,&ch1,1);
  printf("%s",r);
  
   
}