#List containing 10 elements
marks = [90,70,60,95,77,50,48,39,97,33]
#One element is added at last of list i.e.99 using append()
marks.append(99)

#SLICING
#prints the Whole list 
print("Whole List : ",marks[:],"\n")

#prints the list from index 1 to 9
print("List from index 1-9 : ",marks[1:10],"\n")

#prints the list by jumping 2 steps of index / skiping one value
print("List by jumping 2 index at a time : ",marks[::2],"\n")

#prints reversed list
print("Reversed list",marks[::-1],"\n")

#Ascending order
marks.sort()
print("In Ascending order : ",marks,"\n")

#Descending order
marks.sort(reverse = True)
print("In Descending order : ",marks,"\n")

#Highest marks in list 
print("Highest Marks : ",max(marks),"\n")

#Lowest Marks in list
print("Lowest Marks : ",min(marks))

