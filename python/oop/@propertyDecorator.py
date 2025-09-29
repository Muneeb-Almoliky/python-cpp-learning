class Member:
    def __init__(self,name,age):
        self.name=name
        self.age=age
   
    def say_hello(self):
        return f"Hello {self.name}"
    @property
    def age_in_days(self):
        return f"Your age in days is {self.age*365} "  

one=Member("Ahmed",12)

print(one.age_in_days)




