#include <iostream>
using namespace std;

struct Node
{
    int id;
    string song;
    string artist;

    Node *next;
    Node *prev;
};

int main()
{
    Node *head = NULL;
    Node *current = NULL;

    int choice;

    do
    {
        cout << "\n\n===== MUSIC PLAYLIST =====";
        cout << "\n1. Add Song";
        cout << "\n2. Delete Song";
        cout << "\n3. Display Forward";
        cout << "\n4. Display Backward";
        cout << "\n5. Next Song";
        cout << "\n6. Previous Song";
        cout << "\n7. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        // Add Song
        if(choice == 1)
        {
            Node *newNode = new Node;

            cout << "Enter Song ID: ";
            cin >> newNode->id;

            cout << "Enter Song Name: ";
            cin >> newNode->song;

            cout << "Enter Artist Name: ";
            cin >> newNode->artist;

            if(head == NULL)
            {
                head = newNode;

                newNode->next = head;
                newNode->prev = head;

                current = head;
            }
            else
            {
                Node *temp = head;

                while(temp->next != head)
                {
                    temp = temp->next;
                }

                temp->next = newNode;
                newNode->prev = temp;

                newNode->next = head;
                head->prev = newNode;
            }

            cout << "\nSong Added!";
        }

        // Delete Song
        else if(choice == 2)
        {
            int id;
            cout << "Enter Song ID to delete: ";
            cin >> id;

            Node *temp = head;

            if(head == NULL)
            {
                cout << "\nPlaylist is empty!";
            }
            else
            {
                do
                {
                    if(temp->id == id)
                    {
                        temp->prev->next = temp->next;
                        temp->next->prev = temp->prev;

                        if(temp == head)
                            head = temp->next;

                        if(temp == current)
                            current = temp->next;

                        delete temp;

                        cout << "\nSong Deleted!";
                        break;
                    }

                    temp = temp->next;

                } while(temp != head);
            }
        }

        // Display Forward
        else if(choice == 3)
        {
            if(head == NULL)
                cout << "\nPlaylist is empty!";
            else
            {
                Node *temp = head;

                cout << "\n\nForward Playlist:\n";

                do
                {
                    cout << temp->id << " - "
                         << temp->song << " - "
                         << temp->artist << endl;

                    temp = temp->next;

                } while(temp != head);
            }
        }

        // Display Backward
        else if(choice == 4)
        {
            if(head == NULL)
                cout << "\nPlaylist is empty!";
            else
            {
                Node *temp = head->prev;

                cout << "\n\nBackward Playlist:\n";

                do
                {
                    cout << temp->id << " - "
                         << temp->song << " - "
                         << temp->artist << endl;

                    temp = temp->prev;

                } while(temp != head->prev);
            }
        }

        // Next Song
        else if(choice == 5)
        {
            if(current == NULL)
                cout << "\nPlaylist is empty!";
            else
            {
                current = current->next;

                cout << "\nNow Playing: "
                     << current->song << " - "
                     << current->artist;
            }
        }

        // Previous Song
        else if(choice == 6)
        {
            if(current == NULL)
                cout << "\nPlaylist is empty!";
            else
            {
                current = current->prev;

                cout << "\nNow Playing: "
                     << current->song << " - "
                     << current->artist;
            }
        }

    } while(choice != 7);

    return 0;
}