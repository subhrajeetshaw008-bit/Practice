#WAP to add number and string using explicit type conversion

a=10
b='75'
print("The datatype of a is",type(a),'and datatype of b is',type(b))
c=a+int(b)
print('The sum is',c)
d=float(a)+float(b)
print('The sum is',d)
e=str(a)+b
print('The sum is',e)