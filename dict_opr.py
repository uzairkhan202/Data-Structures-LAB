student = {"ID":10044,
           "name":"Uzair",
           "age":19,
           "course":"BTech CSE",
           "marks":85}
print("Original Dictionary : ",student,"\n")
#Accesing elements
print("Name:" ,student["name"],"\n")#Give students name

#Updating elements
student["marks"]=90 #Updates marks from 85 to 90
print("Updated marks(80 to 90): ",student["marks"],"\n")

#Adding Items
student["city"]="Ujjain"#Adds a new item with key=city and value=Ujjain
print("Dictionary after Adding an item(city): ",student,"\n")

#Deleting an element
del student["city"]#Delets the whole item (key:value)
print("Dictionary after City Deletion(city)",student)