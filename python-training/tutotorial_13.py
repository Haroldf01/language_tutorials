class Human(object):
    def __init__(self, name, gender, age, is_parent=None, is_child=None):
        self.name = name
        self.gender = gender
        self.age = age
        self.is_parent = is_parent
        self.is_child = is_child


class Father(Human):
    def __init__(self, name, gender, age, is_parent, is_child, hobbies):
        Human.__init__(self, name, gender, age, is_parent=is_parent, is_child=is_child)
        self.hobbies = hobbies


class Child(Human):
    def __init__(self, name, gender, age, is_parent, is_child, study):
        super(Child, self).__init__(name, gender, age, is_parent=is_parent, is_child=is_child)
        self.study = study


# h = Human('finch', 'male', 12)
f = Father('finch', 'male', 12, is_parent=True, is_child=False, hobbies=['playing', 'coding'])
print(f.age, f.hobbies)


c = Child('parth', 'male', 11, is_parent=True, is_child=False, study='python')
print(c.name, c.age, c.study)

####
# https://www.geeksforgeeks.org/types-of-inheritance-python/
# https://dbader.org/blog/meaning-of-underscores-in-python
# https://www.geeksforgeeks.org/python-property-decorator-property/
# https://www.geeksforgeeks.org/class-method-vs-static-method-python/
# https://www.w3schools.com/python/python_inheritance.asp
# https://www.programiz.com/python-programming/inheritance
