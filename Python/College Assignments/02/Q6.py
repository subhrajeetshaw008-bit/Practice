#WAP to find maximum and minimum element among 3 elements using ternary operator

a=int(input('Enter the value of a:'))
b=int(input('Enter the value of b:'))
c=int(input('Enter the value of c:'))
max = a if (a>b and a>c) else b if (b>c) else c
print("Maximum element is:",max)
min = a if (a<b and a<c) else b if (b<c) else c
print("Minimum element is:",min)