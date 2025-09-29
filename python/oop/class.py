class Member:
    def __init__(self, first_name,middle_name, last_name, gender):
     self.fname=first_name
     self.mname=middle_name
     self.lname=last_name
     self.gender=gender
    def full_name(self):
        return f"{self.fname} {self.mname} {self.lname}" # f stands for formatting
    def first_name(self):
       if self.gender=="Male":
        return f"Hello Mr.{self.fname}" 
       else :
        return f"Hello Ms.{self.fname}"
    def get_all_info(self):
        return f"{self.first_name()} , Your full name is : {self.full_name()}"    
memberone=Member("Ahmed","Mohammed","Alsayed","Male")
membertwo=Member("Mohammed","Ali","Mahmoud","Female")

#print(memberone.fname,memberone.mname,memberone.lname)
#print(membertwo.fname,membertwo.fname,membertwo.lname)
print(memberone.full_name())
print(membertwo.full_name())
print(memberone.first_name())
print(membertwo.first_name())

print(memberone.get_all_info())
