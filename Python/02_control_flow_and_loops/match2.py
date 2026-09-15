'''Write a program using match case that simulates a simple calculator.
Ask the user for two numbers and an operation (+, -, *, /).
Perform the operation using match case.'''

print("****Simple Calculator using match case****")

a=int(input("Enter the 1st number:"))
b=int(input("Enter the 2nd number:"))

print("Operations Available:\n 1-Addition\n 2-Subtraction\n 3-Multiplication\n 4-Division")

op=int(input("Enter which operation you want to do between the two numbers (1-4):"))

match op:
    case 1:
        print("Addition of two numbers gives :",a+b)
    case 2:
        print("Subtracting 2nd number from 1st gives :",a-b)
    case 3:
        print("Multiplication of two numbers gives :",a*b) 
    case 4:
        print("Dividing 2nd number from 1st gives :",a/b)           
