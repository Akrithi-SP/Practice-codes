/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main(){
    float x = 0.0;
    long int y = 10;
      printf("%d\n",sizeof(x));
    printf("%d\n",sizeof(x+y));
    printf("%f\n",x+y);
    printf("%d\n",sizeof(y));
    printf("%d", sizeof(y) == sizeof(x+y));
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int go = 5.0, num = 1*10;
    printf("%d",num/go);
}

*/