'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
'''
****positive or negative number**************

i=int(input('enter a number\n'))
if i>0:
    print('the number is a positive number')
else:
    print('the number is a negative number')

'''
'''
***************even or odd number*************

i=int(input('enter a number\n'))
if (i%2==0):
    print('it is an even number')
else:
    print('it is an odd number')
    
'''
'''
**************to find sum of N natural numbers*************

num=int(input('enter the number of elements upto where the sum has to be taken\n'))
sum=0
for i in range(1,num+1):
    sum+=i
print(sum)

'''
'''
*************sum of N natural numbers in a given range****************

num1=int(input('enter the starting point in a range\n'))
num2=int(input('enter the ending point in a range\n'))
sum=0
for i in range(num1,num2+1):
    sum+=i
print(sum)

'''
'''
*********** greatest of two numbers************

num1=int(input('enter first number\n'))
num2=int(input('enter the second number\n'))

if num1>num2:
    print(num1,'is greater than',num2)
else:
    print(num2,'is greater than ',num1)

'''
'''
************* greatest of three number***************

num1=int(input('enter first number\n'))
num2=int(input('enter second number\n'))
num3=int(input('enter third number\n'))
if (num1>num2 and num1>num3):
    print(num1,'is the greatest among given three numbers')
elif (num2>num1 and num2>num3):
    print(num2,'is greatest among given three numbers')
else:
    print(num3,'is the greatest among given three numbers')
    
'''
'''
***************leap year *************
while(True):
    year= int(input('enter the year\n'))
    if (((year%4==0) and (year%100!=0)) or (year%400==0)): 
        print(year,' is a leap year\n')
    else:
        print(year,'is not a leap year\n')
'''

'''
********** prime numbers **************
num=int(input('enter the number\n'))
count=0
for i in range(1,num):
    if num%i==0:
        count=count+1
if count==1:
    print(num,'is a prime number')
else:
    print(num,'is not a prime number')
 
'''


