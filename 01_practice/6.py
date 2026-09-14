#6-Simple Calculator

print("---------SIMPLE CALCULATOR---------")
a=int(input("Enter first number:"))
b=int(input("Enter second number:"))
print("Options are:\n 1-Addition\n 2-Subtaction\n 3-Multiplication\n 4-Dvisision\n")
choice=int(input("Enter which operation from 1 to 4:"))
if choice==1:
    print("The sum of two numbers is:",a+b)
if choice==2:
    print("The difference of two numbers is:",a-b)
if choice==3:
    print("The product of two numbers is:",a*b) 
if choice==4:
    print("The product is:",a/b)
print("Hope this helped")               