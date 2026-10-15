class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary

    @property
    def first_name(self):
        l = self.name.split(" ")
        return l[0]

    @first_name.setter
    def first_name(self, first):
        l = self.name.split(" ")
        new_name = f"{first} {l[1]}"
        self.name = new_name

e = Employee("Jack Doe" , 34000)
#print(e.first_name())
#e.set_first_name("John")
#print(e.name)
print(e.first_name)
e.first_name = "Kaisen"
print(e.name)


class Person:
    def __init__(self, name):
        self._name = name

    @property
    def name(self):  # Getter
        return self._name

    @name.setter
    def name(self, new_name):  # Setter
        self._name = new_name 

p = Person("Alice")
print(p.name)  # Alice (calls the getter)

p.name = "Bob"  # Calls the setter
print(p.name)  # Bob
#del p.name                                   #Deletes the property
#print(p.name) 