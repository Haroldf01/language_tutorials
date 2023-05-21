# class 19 - 11th September, 2021

class Celsius():
    def __init__(self, temperature: int = 0) -> None:
        self._temperature = temperature

    # gettter method
    def get_temperature(self):
        return self._temperature

    # setter method
    def set_temperature(self, value):
        self._temperature = value

# cel = Celsius(22.34)
# print('temperature value before settiing = {}'.format(cel.get_temperature()))
# cel.set_temperature(2.5)
# print('temperature value after settiing = {}'.format(cel.get_temperature()))


class Father(object):
    def __init__(self) -> None:
        # super().__init__()
        self.__father_name = "John"

    def get_name(self):
        return self.__father_name

    def set_name(self, value):
        self.__father_name = value

class Son(Father):
    def __init__(self) -> None:
        super().__init__()

    def display(self):
        # print('father name from Base class = {}'.format(self.get_name()))
        print('father name from Base class = {}'.format(self.__father_name))

    def change_name(self, value):
        self.__father_name = value

# s = Son()
# s.change_name('harold')
# s.display()

# Exception Handling
div = 5
try:
    res = 5 * 8 / 0
    print(res)
except ZeroDivisionError as e:
    print(e)
except Exception:
    print('this is a generic exception')
    # print('divide by zero occured')

# https://www.w3schools.com/python/python_try_except.asp
# https://www.programiz.com/python-programming/exception-handling
# https://realpython.com/python-exceptions/
