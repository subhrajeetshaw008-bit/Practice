'''Take a user input string and check if it is a palindrome (same forwards and backwards).'''

S=input('Enter the String:')
if (S==S[::-1]):
    print(f"{S} is a Palindrome")
else :
    print(f"{S} is not a Palindrome")    
