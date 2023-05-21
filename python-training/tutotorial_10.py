import math

# print(dir(math))
# print(math.fmod.__doc__)

# a_string = 'hey this is a temp string for some operations'


# print(len(a_string))

a_list = list(range(1, 21))

# name_li = ['Parth', 'parth']

# print('min - {}'.format(min(a_list)))
# print('min - {}'.format(min(name_li)))
# print('max - {}'.format(max(name_li)))

# n = iter(a_string)
# name_1 = next(n)
# name_2 = next(n)

# print(name_1)
# print(name_2)

# print('id of the object - {}'.format(id(a_string)))
# print('id of the object - {}'.format(id(a_list)))

# print(memoryview(b'hello'))

# print(sorted(a_string))

# print(sum(a_list))

sum = 0

for i in a_list:
    sum += i

print(sum)

nums = [2, 5, 1, 3, 4, 6]

# (2, 3,) (5, 4), (1, 6)

num_1 = nums[:3]
num_2 = nums[3:]

new_li = list()

for i, j in zip(num_1, num_2):
    print(i)
    new_li.append(i)
    new_li.append(j)

print(new_li)

# map, filter, hasattr,, setattr(), property()
