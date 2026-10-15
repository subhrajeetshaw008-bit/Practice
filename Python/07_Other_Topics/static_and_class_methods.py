#Instance Method (default)
class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary

    def print_info(self):
        info = f"The name of Employee is {self.name} and their salary is {self.salary}"
        print(info)

e1 = Employee("Jack" , 34555) 
e2 = Employee("Jill" , 34555)           
e1.print_info()
e2.print_info()




#Static Method
class MathUtils:
    @staticmethod
    def add(a, b):
        return a + b

print(MathUtils.add(3, 5))  # 8

#Can also be called on an instance
m = MathUtils()
print(m.add(4,5)) # 9



#Class Method

class Animal:
    species = "Mammal"  # Class attribute

    @classmethod
    def set_species(cls, new_species):
        cls.species = new_species  # Modifies class attribute

    @classmethod
    def get_species(cls):
        return cls.species

print(Animal.get_species())  # Mammal
Animal.set_species("Reptile")
print(Animal.get_species())  # Reptile

# You can also call class methods on instances, but it's less common:
a = Animal()
print(a.get_species()) # Reptile


class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    @classmethod
    def from_string(cls, data):
        name, age = data.split("-")
        return cls(name, int(age))  # Creates a new Person instance

p = Person.from_string("Alice-30")
print(p.name, p.age)  # Alice 30
