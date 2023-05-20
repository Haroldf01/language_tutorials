class Parent(object):
    def get_class_name(self, obj):
        print(obj.__class__)

class Child_1(Parent):
    def my_name(self, name, obj):
        print('my {} function from {}'.format(name, obj.__class__))

class Child_2(Parent):
    def hobbies(self, hobbies):
        print('hobbies {}'.format(hobbies))

class NewSpecies(Child_2):
    def species_name(self):
        print('inherited from child_2, which in turn is a child of Parent class')


class OtherOperations:
    def gaming(self, name):
        print('my fav game is {name}'.format(name))

    def gaming(self, name, type=None):
        print('name - {} Type - {}'.format(name, type))


op = OtherOperations()
op.gaming('The Whitcher', 'Mystic and Sward Fight')
op.gaming('The Whitcher')

# c_1 = Child_1()
# c_2 = Child_2()
# n_s = NewSpecies()

# c_1.get_class_name(c_1)
# c_1.get_class_name(c_2)

# n_s.species_name()
# n_s.get_class_name(n_s)
