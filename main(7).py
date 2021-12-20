'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''


n=int(input())

for i in range (0,n):
    
    for j in range(0,i+1):
        print('*',end=" ")
    print("\r");
    
    
    

n=int(input())
x=0
for i in range (0,n):
    x+=1
    for j in range(0,i+1):
        print(x,end=" ")
    print("\r");
    
