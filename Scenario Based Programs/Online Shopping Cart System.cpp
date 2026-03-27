#include <iostream>
using namespace std;

// Custom Exception
class InvalidInput {
public:
    void show() {
        cout << "Error: Price and Quantity must be positive!" << endl;
    }
};

class Product {
private:
    int id;
    string name;
    float price;
    int quantity;

public:
    void input() {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;

        try {
            cout << "Enter Price: ";
            cin >> price;
            cout << "Enter Quantity: ";
            cin >> quantity;

            if (price < 0 || quantity < 0) {
                throw InvalidInput();
            }
        }
        catch (InvalidInput e) {
            e.show();
            price = 0;
            quantity = 0;
        }
    }

    float calculateTotal() {
        return price * quantity;
    }

    void display() {
        cout << "\nProduct ID: " << id;
        cout << "\nName: " << name;
        cout << "\nPrice: " << price;
        cout << "\nQuantity: " << quantity;
        cout << "\nTotal: " << calculateTotal() << endl;
    }
};

int main() {
    Product p;

    p.input();
    p.display();

    cout << "\nGrand Total: " << p.calculateTotal() << endl;

    return 0;
}
