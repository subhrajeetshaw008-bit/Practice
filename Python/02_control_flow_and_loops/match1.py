'''Ask the user to enter a day number (1-7) and print the corresponding day of the week using match case.'''

day=int(input("Enter number of the day of the week 1-7:"))

match day:
    case 1:
        print("Monday")
    case 2:
        print("Tuesday")
    case 3:
        print("Wednesday") 
    case 4:
        print("Thursday") 
    case 5:
        print("Friday")
    case 6:
        print("Saturday")
    case 7:
        print("Sunday")                      