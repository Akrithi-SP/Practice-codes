'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
INHERITANCE & ABSTRACTION 

'''
from abc import ABCMeta, abstractmethod
class Book(object, metaclass=ABCMeta):
    def __init__(self,title,author):
        self.title=title
        self.author=author   
    @abstractmethod
    def display(): pass

#Write MyBook class
class MyBook(Book):
    def __init__(self,title,author,price):
        Book.__init__(self,title,author)
        self.price=price
    def display(self):
        print("Title:", self.title)
        print("Author:", self.author)
        print("Price:", self.price)
title=input()
author=input()
price=int(input())
new_novel=MyBook(title,author,price)
new_novel.display()
