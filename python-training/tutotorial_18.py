# duck typing
class Duck:
    def swim(self):
        print('i am duck and i can swim')

class Sparrow:
    def swim(self):
        print('i am sparrow and i cannot swim')

    def fly(self):
        print('i am sparrow and i can fly')

class Crocodile:
    def swim(self):
        print('i am a crocodile and i can swim, but not quack')

def duck_typing_test(pass_instance):
    pass_instance.swim()
    pass_instance.fly()

#duck_typing_test(Crocodile())
duck_typing_test(Sparrow())


# private and protected in python
