#Write a function full_name(first, last) that takes first name and last name as parameters and returns a single string in the format "First Last".

def full_name(first,last):
    x=f"{first} {last}"
    return x

f=input("Enter your first name:")
l=input("Enter your last name:")
print("Your Full name is",full_name(f,l))