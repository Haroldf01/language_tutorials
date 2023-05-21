class AddCalc:
    def addition(self, x: float , y: float):
        return x + y

    def display(self):
        print('function display from ADDClac')

class SubCalc:
    def subtraction(self, x: float, y: float):
        return x + y

    def display(self):
        print('function display from SubClac')

    def gaming(self, name, genre):
        print(f'my fav game is {name} and {genre}')


class OtherOperations(AddCalc, SubCalc):
    def multiplication(self, x: float, y: float):
        return x * y

    def gaming(self, name):
        print(f'my fav game is {name}')

    def division(self, x: float, y: float):
        return x / y


other_op = OtherOperations()
other_op.display()
