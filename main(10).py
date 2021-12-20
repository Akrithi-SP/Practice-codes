'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
'''

num1=int(input('enter strting number '))
num2=int(input('enter ending number '))
for i in range (num1,num2+1):
    pr=0
    for j in range (1,num2+1):
        if i%j==0:
            pr=pr+1 
    if pr==2:
        print(i,'is a prime number')
    else:
        print(i,'is not a prime number')
