'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
if __name__ == '__main__':
    n = int(input().strip())
    count=0
    maxx=0
    while(n!=0):
        if(n%2==1):
            count+=1
            
        else:
            if(count>maxx):
                maxx=count
            count=0
        n=n//2
        
if(count>maxx):
    maxx=count  
print(maxx)