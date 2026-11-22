def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if(b==0):
        return"Cannot divide by zero"
    else:
        return a / b

def modulus(a, b):
    return a % b

def power(a, b):
    return a ** b


while True:
    print("\n1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Modulus")
    print("6. Power")
    print("7. Exit")

    choice = input("Enter your choice: ")
    if(choice=="7"):
        print("Succesful exit")
        break

    if(choice in ["1","2","3","4","5","6"]):
        a = float(input("Enter first number : "))
        b = float(input("Enter second number : "))

        if choice == "1" :
            addition = add(a,b)
            print("Addition : ",addition)

        elif choice == "2":
            sub = subtract(a,b)
            print("Subtraction : ",sub)

        elif choice=="3":
            multiplication=multiply(a,b)
            print("Multiplication : ",multiplication)

        elif choice=="4":
            division = divide(a,b)
            print("Division : ",division)

        elif choice == "5":
            modulo = modulus(a,b)
            print("Modulus : ",modulo)

        elif choice == "6":
            pow = power(a,b)
            print("Power : ",pow)

    else:
        print("Invalid choice!")
