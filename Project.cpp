
#include <iostream>
#include <string>
using namespace std;

// Employee information
struct Employee {
    int id;
    string name;
    int age;
    string department;
    double salary;
    int experience;
};

// Linked List Node
struct Node {
    Employee data;
    Node* next;
};


bool login() {

    string username, password;

    cout << "\n========== ADMIN LOGIN ==========" << endl;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == "admin" && password == "dream123") {
        cout << "\nLogin Successful!" << endl;
        return true;
    }
    else {
        cout << "\nInvalid Username or Password!" << endl;
        return false;
    }
}


void addEmployee(Node*& head) {

    Node* newNode = new Node;

    cout << "\nEnter Employee ID: ";
    cin >> newNode->data.id;

    cout << "Enter Employee Name: ";
    cin >> ws;
    getline(cin, newNode->data.name);

    cout << "Enter Age: ";
    cin >> newNode->data.age;

    cout << "Enter Department: ";
    getline(cin >> ws, newNode->data.department);

    cout << "Enter Salary: ";
    cin >> newNode->data.salary;

    cout << "Enter Experience (years): ";
    cin >> newNode->data.experience;

    newNode->next = nullptr;

    int position;

    cout << "Enter Position: ";
    cin >> position;

    // Insert at beginning
    if (position == 1) {

        newNode->next = head;
        head = newNode;

    }

    else {

        Node* temp = head;

        for (int i = 1; i < position - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Invalid Position!" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;

    }

    cout << "\nEmployee Added Successfully!" << endl;
}


void displayEmployees(Node* head) {

    if (head == nullptr) {
        cout << "\nNo Employee Records Found!" << endl;
        return;
    }

    Node* temp = head;

    cout << "\n========== EMPLOYEE RECORDS ==========" << endl;

    while (temp != nullptr) {

        cout << "\nEmployee ID: " << temp->data.id;
        cout << "\nName: " << temp->data.name;
        cout << "\nAge: " << temp->data.age;
        cout << "\nDepartment: " << temp->data.department;
        cout << "\nSalary: " << temp->data.salary;
        cout << "\nExperience: " << temp->data.experience << " years";

        cout << "\n--------------------------------------" << endl;

        temp = temp->next;
    }
}




void deleteEmployee(Node*& head) {

    if (head == nullptr) {
        cout << "\nNo Employee Records Available!" << endl;
        return;
    }

    int id;

    cout << "\nEnter Employee ID to Delete: ";
    cin >> id;

    Node* temp = head;
    Node* previous = nullptr;

    // Search for employee
    while (temp != nullptr && temp->data.id != id) {
        previous = temp;
        temp = temp->next;
    }

    // Employee not found
    if (temp == nullptr) {
        cout << "\nEmployee Not Found!" << endl;
        return;
    }

    // Delete first node
    if (previous == nullptr) {
        head = temp->next;
    }

    // Delete middle or last node
    else {
        previous->next = temp->next;
    }

    delete temp;

    cout << "\nEmployee Deleted Successfully!" << endl;
}


void searchEmployees(Node* head) {

    if (head == nullptr) {
        cout << "\nNo Employee Records Available!" << endl;
        return;
    }

    int choice;
    int id, experience;
    double salary;
    string department;

    cout << "\n========== SEARCH EMPLOYEE ==========" << endl;
    cout << "1. Search by ID" << endl;
    cout << "2. Search by Department" << endl;
    cout << "3. Search by Salary" << endl;
    cout << "4. Search by Experience" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    Node* temp = head;
    bool found = false;

    switch (choice) {

        case 1:
            cout << "Enter Employee ID: ";
            cin >> id;
            break;

        case 2:
            cout << "Enter Department: ";
            cin >> ws;
            getline(cin, department);
            break;

        case 3:
            cout << "Enter Salary: ";
            cin >> salary;
            break;

        case 4:
            cout << "Enter Experience (years): ";
            cin >> experience;
            break;

        default:
            cout << "\nInvalid Search Choice!" << endl;
            return;
    }

    while (temp != nullptr) {

        bool match = false;

        if (choice == 1 && temp->data.id == id)
            match = true;

        else if (choice == 2 && temp->data.department == department)
            match = true;

        else if (choice == 3 && temp->data.salary == salary)
            match = true;

        else if (choice == 4 && temp->data.experience == experience)
            match = true;

        if (match) {

            found = true;

            cout << "\nEmployee Found!";
            cout << "\nID: " << temp->data.id;
            cout << "\nName: " << temp->data.name;
            cout << "\nAge: " << temp->data.age;
            cout << "\nDepartment: " << temp->data.department;
            cout << "\nSalary: " << temp->data.salary;
            cout << "\nExperience: " << temp->data.experience << " years";
            cout << "\n--------------------------------";
        }

        temp = temp->next;
    }

    if (!found) {
        cout << "\nNo Matching Employee Found!" << endl;
    }
}



void modifyEmployee(Node* head) {

    if (head == nullptr) {
        cout << "\nNo Employee Records Available!" << endl;
        return;
    }

    int id, choice;

    cout << "\nEnter Employee ID: ";
    cin >> id;

    Node* temp = head;

    while (temp != nullptr && temp->data.id != id) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "\nEmployee Not Found!" << endl;
        return;
    }

    cout << "\nEmployee Found!";
    cout << "\n1. Modify Name";
    cout << "\n2. Modify Age";
    cout << "\n3. Modify Department";
    cout << "\n4. Modify Salary";
    cout << "\n5. Modify Experience";

    cout << "\n\nEnter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "Enter New Name: ";
            cin >> ws;
            getline(cin, temp->data.name);
            break;

        case 2:
            cout << "Enter New Age: ";
            cin >> temp->data.age;
            break;

        case 3:
            cout << "Enter New Department: ";
            cin >> ws;
            getline(cin, temp->data.department);
            break;

        case 4:
            cout << "Enter New Salary: ";
            cin >> temp->data.salary;
            break;

        case 5:
            cout << "Enter New Experience: ";
            cin >> temp->data.experience;
            break;

        default:
            cout << "\nInvalid Choice!";
            return;
    }

    cout << "\nEmployee Details Updated Successfully!" << endl;
}



int main() {

    Node* head = nullptr;

    cout << "======================================" << endl;
    cout << "       DREAM ADVENTURES" << endl;
    cout << "   EMPLOYEE MANAGEMENT SYSTEM" << endl;
    cout << "======================================" << endl;

    if (!login()) {
        cout << "Access Denied!" << endl;
        return 0;
    }

    int choice;

    do {

        cout << "\n========== MAIN MENU ==========" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Delete Employee" << endl;
        cout << "4. Search Employee" << endl;
        cout << "5. Modify Employee" << endl;
        cout << "6. Exit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                addEmployee(head);
                break;

            case 2:
                displayEmployees(head);
                break;

            case 3:
                deleteEmployee(head);
                break;

            case 4:
                searchEmployees(head);
                break;

            case 5:
                modifyEmployee(head);
                break;

            case 6:
                cout << "\nExiting System..." << endl;
                break;

            default:
                cout << "\nInvalid Choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}
