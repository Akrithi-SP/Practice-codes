/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*************************************************************************

"AkRitHi" ---- TO FIND OUT THOSE CONSONANTS WHICH ARE IMMIDIATE NEXT TO VOWELS!
= kt
*/


#include <stdio.h>

int main()
{
    char s[100];
    scanf("%s",&s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        {
            if(s[i+1]!='a'&& s[i+1]!='A'&& s[i+1]!='e'&& s[i+1]!='E'&& s[i+1]!='i' && s[i+1]!='I' && s[i+1]!='o'&& s[i+1]!='O'&& s[i+1]!='u'&& s[i+1]!='U')
            {
                printf("%c",s[i+1]);
            }
        }
    }

    return 0;
}
