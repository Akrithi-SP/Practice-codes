'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
'''

num1 = int(input('Enter starting number: '))
num2 = int(input('Enter ending number: '))

for i in range(num1, num2 + 1):
    if i < 2:
        print(i, 'is not a prime number')
        continue
    is_prime = True
    for j in range(2, int(i**0.5) + 1):
        if i % j == 0:
            is_prime = False
            break
    if is_prime:
        print(i, 'is a prime number')
    else:
        print(i, 'is not a prime number')

