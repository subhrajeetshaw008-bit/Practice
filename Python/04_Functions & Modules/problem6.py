#Create a list [1, 2, 3, 4, 5] and use map() with a lambda function to get their squares.

l=[1, 2, 3, 4, 5]
squares=list(map(lambda x:x**2,l))
print(squares)