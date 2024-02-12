class grandparents:
    def __init__(self,grandpaname,grandmaname,familyname):
        self.grandpaname=grandpaname
        self.grandmaname=grandmaname
        self.familyname=familyname
    def welcome(self):
        print("\n welcome to DMK family")
        print(self.grandpaname,self.grandmaname,self.familyname)
gp=grandparents("kalaigar","Dhayalu ammal","DMK ")
class mklazhgiri(grandparents):
    def __init__(self, grandpaname, grandmaname, familyname,fathername,mothername):
        self.fathername=fathername
        self.mothername=mothername
        super().__init__(grandpaname, grandmaname, familyname)
    def mk(self):
        print("\n Welcome to alagiri family ")
        print(self.grandpaname,self.grandmaname,self.familyname,self.fathername,self.mothername)
gp=mklazhgiri("kalaigar","Dhayalu ammal","DMK"," alagiri","kanthi \n")
class alagirison(mklazhgiri):  
    def __init__(self, grandpaname, grandmaname, familyname, fathername, mothername,sonname,daughtername):
        self.sonname=sonname
        self.daughtername=daughtername
        super().__init__(grandpaname, grandmaname, familyname, fathername, mothername)
    def mkson(self):
        print(self.grandpaname,self.grandmaname,self.familyname,self.fathername,self.mothername,self.sonname,self.daughtername)
gp1=alagirison("kalaigar","Dhayalu ammal","DMK","alagiri","kanthi","Dayanidhi","kayalvizhi \n")

class stalin(grandparents):
    def __init__(self, grandpaname, grandmaname, familyname,fathername,mothername):
        self.fathername=fathername
        self.mothername=mothername
        super().__init__(grandpaname, grandmaname, familyname)
    def mks(self):
        print("\n welcome to stalin family ")
        print(self.grandpaname,self.grandmaname,self.familyname,self.fathername,self.mothername)
gp=stalin("kalaigar","Dhayalu ammal","DMK","stalin","Durga")
class stalinson(stalin):
    def __init__(self, grandpaname, grandmaname, familyname, fathername, mothername,sonname,daughtername):
        self.sonname=sonname
        self.daughtername=daughtername
        super().__init__(grandpaname, grandmaname, familyname, fathername, mothername)
    def st_son(self):
        print(self.grandpaname,self.grandmaname,self.familyname,self.fathername,self.mothername,self.sonname,self.daughtername)
        print("\n  Thank you for DMK family")
gp=stalinson("kalaigar","Dhayalu ammal","DMK","stalin","Durga","udhyanidhi","sethamari")
# class thirdwife:
#     def __init__(self,grandpaname,grandmaname3,familyname):
#         self.grandpaname=grandpaname
#         self.grandmaname=grandmaname3
#         self.familyname=familyname 
#     def __3__(self):
#         print(self.grandpaname,self.grandmaname,self.familyname)
# gp.

    
        
gp.welcome()
gp1.mk()
gp1.mkson()
gp.mks()
gp.st_son()

    

    
        

























# class person:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age
#     def sayhi(self):
#         return "Hi, My name is",self.name
# p = person('bhavani', 20)
# print(p.name)
# print(p.age)
# print (p.sayhi())


    
    




        
# class Person:
#   def __init__(self, name, age):
#     self.name = name
#     self.age = age

# p1 = Person("bhavani", 36)

# print(p1.name)
# print(p1.age)












































#def Addtion():
#     a=10
#     print(a)
#     if a==7:
    
#         print ("a is 7",a)
#         x="welcome my python page"
#         for x1 in x:
#             print(x1)
#         x=x.split(" ")
#         for x2 in x:
#             print(x2)
#     elif a>11:
        
#         print ("a is 7",a)
#         x="welcome my python page"  
#         for x1 in x:
#             print(x1)
#         x=x.split(" ")
#         for x2 in x:
#             print(x2)
#     else:
        
#         print("a is less than ",a)
    
#     y=input("Enter the value").split()
#     print(y)
# Addtion() 

