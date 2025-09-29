class Member:
    
    def __init__(self,name):
        self.__name=name            #two underscores before the variable indicates that it is private
    def say_hello(self):
        return f"Hello {self.__name}"
    def get_name(self):
        return self.__name
    def set_name(self,new_name):
        self.__name=new_name

one = Member("Ahmed")



#print(one.__name)
print(one.say_hello())

print(one._Member__name) # a way to get the private variable

one.set_name="Abbas"

print(one.get_name())


