students = {}

while True:
    print("\n===== Student Management System =====")
    print("1. Add Student")
    print("2. Display Students")
    print("3. Search Student")
    print("4. Update Marks")
    print("5. Delete Student")
    print("E. Exit \n")

    choice = input("Enter your choice: ")

    if choice == "1":
        #Add record
        id= int(input("Enter ID : "))
        name = str(input("Enter Name : "))
        age= int(input("Enter Age : "))
        course = str(input("Enter Course : "))
        marks = int(input("Enter Marks : "))
        students[id]={"Name":name,
               "Age" : age,
               "Course": course,
               "Marks":marks}
        print("Student Added")

    elif choice == "2":
        #Display all records
        for id, details in students.items():
            print("ID :",id, details)
        

    elif choice == "3":
        #Search record
        search_id = int(input("Enter ID to search: "))
        if(search_id in students):
            print(students[search_id])

        else: 
            print("NOT FOUND")

    elif choice == "4":
        update_id = int(input("Enter ID whose marks you have to update: "))

        if update_id in students:
            updated_marks = float(input("Enter updated marks: "))
            students[update_id]["Marks"] = updated_marks
            print("Marks updated successfully")
        else:
            print("ID not found")

    elif choice == "5":
        delete_record = int(input("Enter ID of whoose record you want to delete : "))
        if delete_record in students:
            del students[delete_record]
            print("Record Deleted")
        else:
            print("ID not found")

    elif choice.lower() == "e":
        print("Program ended.")
        break

    else:
        print("Invalid choice!")
