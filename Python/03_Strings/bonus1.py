'''Write a program that counts how many vowels are in a given string.'''

Sentence=input("Enter the String:")
vowels=['a','e','i','o','u','A','E','I','O','U']
sum=0
for ch in Sentence:
    if ch in vowels:
        sum += 1
print(f"There are {sum} vowels in the string")        