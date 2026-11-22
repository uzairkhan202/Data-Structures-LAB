#Accepts an integer from user and stores in n 
n = int(input("Enter a nummber to check if its prime or not : "))

# if checks that the give no. when divided by 2 gives a remainder 0(only)
if (n<=1):
    print("Number is Not Prime")

else:
    for i in range(2,n):
        if(n%i==0):
            print("Number is Not Prime")

            break
    else:
        print("Number is Prime")
    