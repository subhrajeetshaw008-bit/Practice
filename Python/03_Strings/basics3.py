'''Take the string "  i love python programming  " and:
Remove extra spaces from both ends
Convert it to title case
Count how many times "o" appears
Check if the string "123abc" is alphanumeric.
'''

string = "  i love python programming  "
print(string.strip())
print(string.title())
print(string.count("o"))
text="123abc"
print(text.isalnum())