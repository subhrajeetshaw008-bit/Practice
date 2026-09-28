#Write a function square(num) that returns the square of a given number. Test it with different numbers.

def square(a):
    x=a**2
    return x
i=int(input("Enter the number to be squared:"))
c=square(i)
print(f"The Square of {i} is:",c)
