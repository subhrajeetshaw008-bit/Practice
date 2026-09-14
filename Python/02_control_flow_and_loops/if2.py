"""1. If-Else Conditional Statements
(ii)Create a program that checks if a person is eligible to vote (age >= 18)."""

DOB=int(input("Enter your year of birth:"))
year=int(input("What's the current year:"))
if year-DOB>18:
    print("Over 18 years old")
elif year-DOB<18:
    print("Below 18 years old")
else:
    print("Exactly 18 years old")        