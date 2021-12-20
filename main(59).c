/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*************/

//to remove duplicates ORRR to find non-repeating characters

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[1000];
    printf("enter a string\n");
    scanf("%s",&a);                  //gets(a);
    for (int i=0;i<strlen(a);i++)
    {
        
        for(int j=i+1;a[j]!='\0';j++)
        {
            
            if(a[i]==a[j])
            {
                for(int k=j;a[k]!='\0';k++)
                {
                    a[k]=a[k+1];
                }
                j--;
            } 
            
        } 
        
    }
    printf("after removing the duplicate characters from a string -- %s",a);
    return 0;
}




