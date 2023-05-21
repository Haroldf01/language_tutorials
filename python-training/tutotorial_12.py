class Person:
    def __init__(self, name, gender):
        self.name = name
        self.gender = gender

    def isFemale(self):
        return self.gender.lower() != 'male'

    def height(self, value):
        print('this is printing', p.name)
        print('this is printing', self.name)
        return '{}'.format(value)


p = Person('finch', 'Male')
# print(p.gender)
# print(p)

print(p.isFemale())
print(p.height(12.121))
