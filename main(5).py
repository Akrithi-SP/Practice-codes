'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
new_s=""
a=input()
print("before--",a)
for i in a:
    if(i.islower()):
        new_s+=(i.upper())
    elif(i.isupper()):
        new_s+=(i.lower())
        
print("after --", new_s)


*************************************
'''
n=input()
b=""
u=l=d=s=0
for i in n:
    if(i.islower()):
        l=l+1
        b+=i.upper()
    elif(i.isupper()):
        u=u+1
        b+=i.lower()
    elif(i.isdigit()):
        d=d+1
    else:
        s=s+1
        
print(b,u,l,d,s)

'''
