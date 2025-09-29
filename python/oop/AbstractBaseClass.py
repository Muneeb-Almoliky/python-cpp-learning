
from abc import ABCMeta,abstractmethod

class programming(metaclass=ABCMeta):
    
    @abstractmethod
    def has_oop(self):
       
        pass
    
    def has_oop(self):

        pass

class python(programming):
    
    def has_oop(self):
       
        return "Yes"

class pascal(programming):

    def has_oop(self):

        return "No"


one=python()
print(one.has_oop())















