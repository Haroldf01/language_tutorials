def display():
    print('hello from display using functional programming')

class Person:
    def __init__(self, name: str, age: int, hobbies = None):
        self.name = name
        self.age = age
        self.hobbies = hobbies

    def display(self) -> list:
        print('hello from display function')
        # print(self.name, self.age, self.hobbies)
        return [self.name, self.age]

    def callback(self):
        print(self.display())


class Car:
    def display(self):
        print('hello from display function from Car classs')


p = Person('name', 12, ['hob', 'bies'])
# p.display()
p.callback()

c = Car()
c.display()
