#include <iostream>
using namespace std;

class Product {
    string name;
    int price, quantity;

public:
    Product(string n, int p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    Product operator+(Product p) {
        if (name == p.name && price == p.price)
            return Product(name, price, quantity + p.quantity);

        cout << "Products are different\n";
        return *this;
    }

    bool operator>(Product p) {
        return price * quantity > p.price * p.quantity;
    }

    void display() {
        cout << name << " " << price << " " << quantity << endl;
    }
};

int main() {
    Product p1("Book", 100, 2);
    Product p2("Book", 100, 3);

    Product p3 = p1 + p2;

    cout << "Combined product: ";
    p3.display();

    if (p1 > p2)
        cout << "Product 1 has higher value.";
    else
        cout << "Product 2 has higher or equal value.";

    return 0;
}