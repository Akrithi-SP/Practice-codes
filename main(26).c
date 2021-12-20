/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*    to print A B C D as a pattern
#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }

    return 0;
}

*/
/*
t0 print 5 4 3 2 1  as pattern


#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=1;j --)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0; 
}

*/

/*   to print right angled triangle of 123..

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0; 
}

*/

/* to print right angled trianglewith quite diff pattern from previous one

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",i);   //just change printing variable as i from previous one
        }
        printf("\n");
    }

    return 0; 
}

*/ 

/*  to print * right angled pyramid

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");   
        }
        printf("\n");
    }

    return 0; 
}

*/

/* ABC right angled triangle

#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}

*/

/*

#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=i;j<=5;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for (int j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for (int j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

*/

/* --------------------
    A
    B A 
    C B A 
    D C B A 
    E D C B A
 ---------------------------   
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=i;j>=1;j--)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}
 ---------------------------
 */
 
 
 /*---------------------------
    A B C D E 
    A B C D 
    A B C 
    A B 
    A 
-----------------------
 
#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}

----------------------- */

/*
    A B C D E 
    B C D E 
    C D E 
    D E 
    E 
-----------------------
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=i;j<=5;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}

-----------------*/

/* -----------------
    E 
    E D 
    E D C 
    E D C B 
    E D C B A 
------------------

#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for (int j=5;j>=i;j--)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}

-----------------*/

/*-----------------
    E D C B A 
    E D C B 
    E D C 
    E D 
    E 
-----------------------

#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=5;j>=i;j--)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}
 -----------------------*/
 
/*-----------------------
    E D C B A 
    D C B A 
    C B A 
    B A 
    A 
-----------------------
    
 #include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for (int j=i;j>=1;j--)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}

-----------------------*/

/*-----------------------
    *
    * *
    * * *
    * * * *
    * * * * *


#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

-----------------------*/

/*-----------------------
    * * * * *
    * * * *
    * * *
    * *
    *

#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=5;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

-----------------------*/

/*-----------------------

    * * * * *
    *       *
    *       *
    *       *
    * * * * *      
 

#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            if(i==1|| i==5|| j==1||j==5)
            {
                 printf("* ");
            }
            else
            {
                printf("  ");
            }
           
        }
        printf("\n");
    }
    return 0;
}
-----------------------*/

/*
    *
    * *
    *   *
    *     *
    * * * * *
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            if(i==5|| j==1||j==i)
            {
                 printf("* ");
            }
            else
            {
                printf("  ");
            }
           
        }
        printf("\n");
    }
    return 0;
}

 -----------------------*/
 
 /*-----------------------
    1
    1 0 
    1 0 1 
    1 0 1 0 
    1 0 1 0 1
 
 #include<stdio.h>
 int main()
 {
     for(int i=1;i<=5;i++)
     {
         for(int j=1;j<=i;j++)
         {
             printf("%d",j%2);
         }
         printf("\n");
     }
     return 0;
 }
 
 -----------------------*/
 /*
    1 
    2 3 
    4 5 6 
    7 8 9 10
    11 12 13 14 15
    
 #include<stdio.h>
 int main()
 {
     int k=1;
     for(int i=1;i<=5;i++)
     {
         for(int j=1;j<=i;j++)
         {
             printf("%d ",k++);
         }
         printf("\n");
     }
     return 0;
 }

-----------------------*/

/*-----------------------
    1 
    0 1 
    0 1 0 
    1 0 1 0 
    1 0 1 0 1

 #include<stdio.h>
 int main()
 {
     int k=1;
     for(int i=1;i<=5;i++)
     {
         for(int j=1;j<=i;j++)
         {
             printf("%d ",((k++)%2));
         }
         printf("\n");
     }
     return 0;
 }
 
-----------------------*/

/*-----------------------
        1
       12
      123
     1234
    12345

 #include<stdio.h>
 int main()
 {
     int n;
     printf("PLEASE ENTER NO.OF ROWS: ");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {  
         for(int k=n;k>=i;k--)
         {
             printf(" ");
         }
         for(int j=1;j<=i;j++)
         {
             printf("%d",j);
         }
         printf("\n");
     }
     return 0;
 }
 -----------------------*/
 
 /*-----------------------
        1 
       1 2 
      1 2 3 
     1 2 3 4 
    1 2 3 4 5
    
    
 #include<stdio.h>
 int main()
 {
     int n;
     printf("PLEASE ENTER NO.OF ROWS: ");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {  
         for(int k=n;k>=i;k--)
         {
             printf(" ");
         }
         for(int j=1;j<=i;j++)
         {
             printf("%d ",j);
         }
         printf("\n");
     }
     return 0;
 }
 
 -----------------------*/
 
/*-----------------------
#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
     for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0; 
}
 
 -----------------------*/
 