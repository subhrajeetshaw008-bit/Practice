#WAP to calculate simple and compound interest

principle=float(input('Enter the princple:'))
rate=float(input("Enter the rate:"))
time=float(input('Enter the time:'))
simple_interest=(principle*rate*time)/100
print('Simple interest is:',simple_interest)
compound_interest=principle*((1+(rate/100))**time)-principle
print('Compound interest is:',compound_interest)