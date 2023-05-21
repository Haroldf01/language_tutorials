def add(num_1: int, num_2: float):
    return num_1  + num_2

def sub(num_1: int, num_2: float):
    return num_1 - num_2

def mul(num_1: int, num_2: float):
    return num_1 * num_2

def div(num_1: int, num_2: float):
    return num_1 / num_2

def floor_div(num_1: int, num_2: float):
    return num_1 // num_2

def exp(num_1: int, num_2: float):
    return num_1 ** num_2

def mod(num_1: int, num_2: float):
    return num_1 % num_2

def display(num_1: int, num_2: float):
    print(f'add - {add(num_1, num_2)}')
    print(f'sub - {sub(num_1, num_2)}')
    print(f'mul - {mul(num_1, num_2)}')
    print(f'div - {div(num_1, num_2)}')
    print(f'floor_div - {floor_div(num_1, num_2)}')
    print(f'exp - {exp(num_1, num_2)}')
    print(f'mod - {mod(num_1, num_2)}')

# display(22, 4)


# below function is an example of default value argument type
def person_info(name: str = None, age: int = None):
    # this `isinstance() function is used to check for the type of a variable
    # it takes 2 arguments;
    # 1 ---> variable
    # 2 ---> datatype
    if isinstance(age, int):
        print('it is int')
    else:
        print('it is not interger')

person_info('parth', 11.2)


def add_all_values(*args):
    # taking `n number` of arguments
    # which returns a tuple
    print(args)
    total = 0
    for i in args:
        total += i
    # print(f'total = {total}')
    return total

# total = add_all_values(1, 2, 3, 4, 5)
# print(f'outer total - {total / 3}')
