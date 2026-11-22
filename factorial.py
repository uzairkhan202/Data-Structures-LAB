#Accepts an integer from user and stores in n 
n = int(input("Enter a nummber to get its factorial : "))

# multi stores the multiplicaton of 1 to n
multi = 1

#Producs multiplication of 1 to n  
for i in range(1,n+1):

    #multiplies increasing i with its preveous value stored in multi
    multi*=i
print("The factorial is : ",multi)