#Keyword arguments with Positional arguments
def student(name , age):
    print("Name: ",name)
    print("Age: ",age)

print("Keyword arguments :- ")
student(age=19,name="Uzair")

print(" ")

print("Positional arguments :-")
student(18,"Uzair")

print(" ")

#Default arguments
def greet(name = "User"):
    print("Hello",name)
print("Default arguments :- ")
greet()
greet("Uzair")

print("")

#Variable-length arguments(*args)
def add(*args): #now we can give any number of arguments , * tells py "collect all posi.argu. nd put togethr"
    total=0

    for i in args: # args recieves the positional arguments as tuple so we will use forr loop to get result
        total = total+i
    return total
print("Variable-lenght argument :-")
print(add(10,20,30,40,50,60,70,80,90,100))