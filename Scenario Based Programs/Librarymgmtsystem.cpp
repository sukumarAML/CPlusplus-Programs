#include <iostream>
using namespace std;

// Custom exception
class BookNotAvailable {
public:
    void show() {
        cout << "Error: Book is already issued!" << endl;
    }
};

class Library {
private:
    int bookId;
    string title;
    string author;
    bool isAvailable;

public:
    void addBook() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Author: ";
        cin >> author;
        isAvailable = true;
    }

    void issueBook() {
        try {
            if (!isAvailable) {
                throw BookNotAvailable();
            }
            isAvailable = false;
            cout << "Book issued successfully.\n";
        }
        catch (BookNotAvailable e) {
            e.show();
        }
    }

    void returnBook() {
        isAvailable = true;
        cout << "Book returned successfully.\n";
    }

    void display() {
        cout << "\nBook ID: " << bookId;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nStatus: " 
             << (isAvailable ? "Available" : "Issued") << endl;
    }
};

int main() {
    Library book;
    int choice;

    book.addBook();

    do {
        cout << "\n1. Issue Book\n2. Return Book\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                book.issueBook();
                break;
            case 2:
                book.returnBook();
                break;
            case 3:
                book.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 4);

    return 0;
}
