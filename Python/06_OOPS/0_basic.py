'''1.Create a Car Class with attributes like brand and model.Then Create an instance of this class.(Basic Class and Object)
   2.Add a method to Car class to show the full name of the car (brand and model).(Class method and self)
   3.Create an ElectricCar class that inherits attributes from the car class and has an additional attribute battery_size.(Inheritence) 
   4.Modify the Car class to encapsulate the brand attribute, make it private, and provide a better getter method for it.(Encapsulation)
   5.Demonstrate Polymorphism by defining a method feul_type in both classes, but with different behaviours.(Polymorphism)
   6.Add a class variable to Car that keeps track of number of cars created.(Class Attributes)
   7.Add a static method to the Car class that returns a general description of a car.(Static Method-Decorators)
   8.Use a property decorator in the Car class to make the model attribute read-only.(Property Decorators)
   9.Demonstrate te usage of isinstance() to check if my_tesla is an instance of Car and ElectricCar.(Class Inheritance and isinstance( function))
   10.Create two classes Battery and Engine and let the ElectricCar class inherit from both, demonstrating multiple inheritance.(Multiple Inheritance) 
'''
class Car:
    total_car = 0

    def __init__(self, brand, model):
        self.__brand = brand
        self.__model = model
        Car.total_car += 1

    def get_brand(self):
        return "The Brand of the Car is : " + self.__brand    

    def full_name(self):
        return f"{self.__brand} {self.__model}"    

    def fuel_type(self):
        return "Petrol or Diesel"
    
    @staticmethod   #Decorators
    def general_description():
        return "Cars are means of transportation"

    @property       #Property Decorators
    def model(self):
        return self.__model

    

class ElecticCar(Car):
    def __init__(self, brand, model, battery_size):
        super().__init__(brand, model)
        self.battery_size = battery_size

    def fuel_type(self):
        return "Electric"
    
Safari = Car("Tata", "Safari")
print(Safari.fuel_type())


my_tesla = ElecticCar("Tesla","Model S","85KwH") 
print(isinstance(my_tesla,Car))
print(isinstance(my_tesla,ElecticCar))
print(my_tesla.full_name())    
print(my_tesla.get_brand())   
print(my_tesla.fuel_type())
print(my_tesla.model)

my_car = Car("Toyota","Corolla")
#print(my_car.__brand)
print(my_car.full_name())

my_new_car = Car("Tata","Safari")
#print(my_new_car.__brand)

test=Car("test","test")


print(Car.total_car)
print(Car.general_description())



class Battery:
    def battery_info(self):
        return "Electric"

class Engine:
    def engine_info(self):
        return "EV"

class ElectricCarTwo(Battery, Engine, Car):
    pass

my_new_tesla = ElectricCarTwo("Tesla","Model V")
print(my_new_tesla.engine_info())
print(my_new_tesla.battery_info())