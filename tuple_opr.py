city= ("Indore","Bhopal","Ujjain","Gwalior","Jabalpur")

#Accessing elements
print(city[0])
print(city[1])
print(city[2])

#Slicing elements
#prints the Whole tuple 
print("Whole tuple : ",city[:],"\n")

#prints the tuple from index 1 to 3
print("Tuple from index 1-3 : ",city[1:4],"\n")

#prints the tuple by jumping 2 steps of index / skiping one value
print("Tuple by jumping two index at a time : ",city[::2],"\n")

#prints reversed tuple
print("Reversed tuple : ",city[::-1],"\n")

#Searching for element
name = str(input("Enter city name to search (Case Sensitive): "))
for i in range(len(city)):
    if(city[i] == name):
        print("Found",name,"At index",i)

        break

else:
    print("Not Found")

#Length of tuple
print("Length of tuple is : ",len(city))
