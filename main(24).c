/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[10000];
    scanf("%s",&a);
    printf("before\n %s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(islower(a[i]))
        {
            a[i]=toupper(a[i]);
        }
    
    
        else if(isupper(a[i]))
        {
            a[i]=tolower(a[i]);
        }
            

    }

    printf(" after\n %s",a);
    return 0;
}

/**************************************

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

int main() {
    //u=no of upper
    //l=mo of lower
    //d  digit
    //s special character
    
 int u=0,l=0,d=0,s=0;
 char a[10]="AbCd1***";
 for(int i=0;a[i]!='\0';i++){
     if(islower(a[i])){
         a[i]=toupper(a[i]);
         l++;
     }
    else if(isupper(a[i])){
         a[i]=tolower(a[i]);
         u++;
     }
     else if(isdigit(a[i])){
         d++;
     }
     else 
     s++;
 }
 printf("%s %d %d %d %d",a,l,u,d,s);

 
}

*///




