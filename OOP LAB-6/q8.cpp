#include <iostream>
using namespace std;

class Item {
    string name;
    int price, quantity;

public:
    Item(string n, int p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    Item operator+(Item i) {
        if (name == i.name && price == i.price)
            return Item(name, price, quantity + i.quantity);

        cout << "Items are different\n";
        return *this;
    }

    void display() {
        cout << name << " " << price << " " << quantity;
    }
};

int main() {
    Item i1("Pen", 10, 5);
    Item i2("Pen", 10, 3);

    Item i3 = i1 + i2;

    i3.display();
    return 0;
}