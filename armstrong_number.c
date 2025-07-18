/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, rem, temp, mul = 1, sum = 0, count = 0;
    scanf("%d", &num);
    temp = num;
    printf("given number is %d\n", temp);

    // Count number of digits
    while (num != 0)
    {
        rem = num % 10;
        count++;
        num = num / 10;
    }

    num = temp;
    while (num != 0)
    {
        rem = num % 10;
        mul = 1;
        for (int i = 1; i <= count; i++)
        {
            mul = mul * rem;
        }

        sum = sum + mul;
        num = num / 10;
    }

    printf("result is %d\n", sum);
    if (sum == temp)
    {
        printf("it is an armstrong number\n");
    }
    else
    {
        printf("it is not an armstrong number\n");
    }

    return 0;
}
