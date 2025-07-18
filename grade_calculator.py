'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
class Person:
	def __init__(self, firstName, lastName, idNumber):
		self.firstName = firstName
		self.lastName = lastName
		self.idNumber = idNumber
	def printPerson(self):
		print("Name:", self.lastName + ",", self.firstName)
		print("ID:", self.idNumber)

class Student(Person):
    #   Class Constructor
    #   
    #   Parameters:
    #   firstName - A string denoting the Person's first name.
    #   lastName - A string denoting the Person's last name.
    #   id - An integer denoting the Person's ID number.
    #   scores - An array of integers denoting the Person's test scores.
    #
    # Write your constructor here
    def __init__(self,firstName,lastName,idNumber,scores):
        Person.__init__(self,firstName,lastName,idNumber)
        self.scores=scores
        
    
    #   Function Name: calculate
    #   Return: A character denoting the grade.
    #
    # Write your function here
    
    def calculate(self):
        sum=0
        for score in scores:
            sum+=score
        a=sum//len(scores)
        if a<40:
            return 'T'
        elif a<55:
            return 'D'
        elif a<70:
            return 'P'
        elif a<80:
            return 'A'
        elif a<90:
            return 'E'
        else:
            return 'O'
    
    
    
line = input().split()
firstName = line[0]
lastName = line[1]
idNum = line[2]
numScores = int(input()) # not needed for Python
scores = list( map(int, input().split()) )
s = Student(firstName, lastName, idNum, scores)
s.printPerson()
print("Grade:", s.calculate())
