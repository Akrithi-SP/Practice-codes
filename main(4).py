'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
a=int(input('enter first number:'))
b=int(input('enter second number:'))
i=1
hcf=0
while(i<=a or i<=b):
    if(i%a==0 and i%b==0):
        hcf=i
    i=i+1
print('hcf of two nrs is',hcf)