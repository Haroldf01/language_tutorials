#     lambda arguments: expression

x = lambda x, y, z: x + y - z
print(x(10, 5, 5))

def add(x, y, z):
    x += y - z
    x -= 5
    print('print from inside a function', x)
    # return x + 10

# print('this is from def function add -- ', add(10))
add(10, 5, 5)

###
# a defined function can call itself.
###

def add_two(n):
    print('hey')
    if n <= 5:
        n+add_two(n+1)
    else:
        return n

add_two(1)
