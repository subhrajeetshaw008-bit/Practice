'''Write a function calculate_area(length, width=10) that returns the area of a rectangle. Test it by calling the function with:
Both length and width
Only length (use default width)'''


def calculate_area(l,w=10):
    x=l*w
    return x

length=int(input("Enter the length of Rectangle:"))
width=(input("Enter the width of Rectangle(press Enter for default width):"))
if width == "":
    print("The Area of Rectangle is:",calculate_area(length))
else:
    print("The Area of Rectangle is:",calculate_area(length, int(width)))