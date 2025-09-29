

class A:

    def do_something(self):
        print("From class A")
        raise NotImplementedError("Derived class must implement this method")
class B(A):
    def do_something(self):
        print("From class B")
    pass
class c(A):
    def do_something(self):
        print("From class c")
    pass
my_instance=c()

my_instance.do_something()








