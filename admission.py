# Input of Age from user
age = int(input("Enter your age : "))

#Input of Percentage from user
percentage = int(input("Enter your percentage : "))

#Age and Percentage eligibility check using if and nested-if statements 
if(age>=16 and age<100):

    if(percentage>=59 and percentage<=100 ):
         print("You are Eligible for Admission")

    #this else counter the neted-if condition (when fails)
    else:
        print("You are Not Eligible for Admission")

#this else counter the if condition (when fails)
else:
    print("You are Not Eligible for Admission")
    