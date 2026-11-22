# 5 Inputs from user
marks1 = float(input("Enter Subject I marks (0-100) : "))
marks2 = float(input("Enter Subject II marks (0-100) : "))
marks3 = float(input("Enter Subject III marks (0-100) : "))
marks4 = float(input("Enter Subject IV marks (0-100) : "))
marks5 = float(input("Enter Subject V marks (0-100) : "))

#For total marks obtained
Total = marks1 + marks2 + marks3 + marks4 + marks5
#Percentage over obtained marks
Percentage = (Total/500)*100

print(f"Total Marks are : {Total}")
print(f"Percentage is : {Percentage}")

#Grad using percentage
if(Percentage>=90 and Percentage<=100):
    print("Your Overall Grade is : A+")

elif(Percentage>=80 and Percentage<=89):
    print("Your Overall Grade is : A")

elif(Percentage>=70 and Percentage<=79):
    print("Your Overall Grade is : B")

elif(Percentage>=60 and Percentage<=69):
    print("Your Overall Grade is : C")

elif(Percentage>=50 and Percentage<=59):
    print("Your Overall Grade is : D")

elif(Percentage<50 and Percentage>=0):
    print("Your Overall Grade is : F")

else:
    print("Invalid input")


'''
#Subject II Grade
if(marks2>=90 and marks2<=100):
    print("Subject I Grade is : A+")

elif(marks2>=80 and marks2<=89):
    print("Subject I Grade is : A")

elif(marks2>=70 and marks2<=79):
    print("Subject I Grade is : B")

elif(marks2>=60 and marks2<=69):
    print("Subject I Grade is : C")

elif(marks2>=50 and marks2<=59):
    print("Subject I Grade is : D")

elif(marks2<50 and marks2>=0):
    print("Subject I Grade is : F") 

#Subject III Grade
if(marks3>=90 and marks3<=100):
    print("Subject I Grade is : A+")

elif(marks3>=80 and marks3<=89):
    print("Subject I Grade is : A")

elif(marks3>=70 and marks3<=79):
    print("Subject I Grade is : B")

elif(marks3>=60 and marks3<=69):
    print("Subject I Grade is : C")

elif(marks3>=50 and marks3<=59):
    print("Subject I Grade is : D")

elif(marks3<50 and marks3>=0):
    print("Subject I Grade is : F")

#Subject IV Grade
if(marks4>=90 and marks4<=100):
    print("Subject I Grade is : A+")

elif(marks4>=80 and marks4<=89):
    print("Subject I Grade is : A")

elif(marks4>=70 and marks4<=79):
    print("Subject I Grade is : B")

elif(marks4>=60 and marks4<=69):
    print("Subject I Grade is : C")

elif(marks4>=50 and marks4<=59):
    print("Subject I Grade is : D")

elif(marks4<50 and marks4>=0):
    print("Subject I Grade is : F")

#Subject V Grade
if(marks5>=90 and marks5<=100):
    print("Subject I Grade is : A+")

elif(marks5>=80 and marks5<=89):
    print("Subject I Grade is : A")

elif(marks5>=70 and marks5<=79):
    print("Subject I Grade is : B")

elif(marks5>=60 and marks5<=69):
    print("Subject I Grade is : C")

elif(marks5>=50 and marks5<=59):
    print("Subject I Grade is : D")

elif(marks5<50 and marks5>=0):
    print("Subject I Grade is : F")
'''