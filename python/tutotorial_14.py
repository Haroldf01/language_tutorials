class Base(object):
    def __init__(self, base_name):
        self.class_name = base_name

    def display(self):
        print('base class')


class Derived_1(Base):
    def __init__(self, base_name, d_name_one):
        super(Derived_1, self).__init__(base_name)
        self.d_name_one = d_name_one

    def display(self):
        print('derived_1 class', self.d_name_one)


class Derived_2(Derived_1):
    def __init__(self, base_name, d_name_one, d_name_two):
        super(Derived_2, self).__init__(base_name, d_name_one)
        self.d_name_two = d_name_two

    def display(self):
        print('derived_2 class', self.d_name_two)


b = Base('base')
d_1 = Derived_1('base', 'd_one')
d_2 = Derived_2('base', 'd_one', 'd_two')

print(b)
print(d_1)
print(d_2)
