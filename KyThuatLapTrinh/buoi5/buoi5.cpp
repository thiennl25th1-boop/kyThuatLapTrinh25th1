#include <iostream>
using namespace std;

struct Author {
    int id;
    string name;
};

struct Book {
    int id;
    string name;
    Author author;
    friend ostream& operator<<(ostream& os, const Book& b) {
        os << "Book information: " << endl;
        os << "\t+ Id: " << b.id;
        os << "\t+ Name: " << b.author.name << endl;
        return os;
    }
};

struct Node {
    Book data;
    Node* next;
};

struct LinkedList {
    Node* head;
    void Show() {
        if (head == NULL) {
            cout << "No book avilable" << endl;
            return;
        }
        Node* item = head;
        While(item != NULL) {
            cout << item->data;
            item = item->next;
        }
    }
    void Addfirst(Node* p) {
        p->next = head->next;
        head->next = p;
    }
};

int main()
{
    LinkedList books = { NULL };

    do {
        system("cls"); // or "clear" on Linux/Mac

        cout << "-------- BOOK MANAGEMENT -------" << endl;
        cout << "1. Show all books" << endl;
        cout << "2. Add a Book" << endl;
        cout << "3. Delete a book" << endl;
        cout << "4. Update a book" << endl;
        cout << "5. Find book" << endl;
        cout << "6. Export to file" << endl;
        cout << "7. Import from file" << endl;
        cout << "0. Exit" << endl;
        cout << "------------------------------" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            Book.Show();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }

        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();

    } while (true);
}