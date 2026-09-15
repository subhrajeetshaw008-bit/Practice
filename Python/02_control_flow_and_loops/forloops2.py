'Print the multiplication table of a number (entered by user).'

num=int(input("Enter the number you want multiplication table of:"))
end=int(input("Till how many digits you want this table to go on:"))

for i in range(1,end+1):
    print(num,"*",i,"=",num*i)