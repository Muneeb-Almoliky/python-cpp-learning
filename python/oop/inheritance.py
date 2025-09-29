class food:
    def __init__(self,name,price):
        self.name=name
        self.price=price
        print(f"{self.name} is created from main class")
    def eat(self):
        print("eat method from main class")

class Apple(food):   # derived class
    def __init__(self,name,price,amount): # it overrides the base class
        #food.__init__(self,name) # create instance from base class
        super().__init__(name,price)
        self.amount=amount
        print(f"{self.name} is created from derived class and price is {self.price} and the amount is {self.amount}")
    def get_from_tree(self):  #this method will override the method in the main class
        print("Get from tree from derived class")
    def eat(self):
        print("eat method from derived class")

#food_one=food("Pizza")
food_two=Apple("Pizza",150,500)
food_two.eat() 
food_two.get_from_tree()






