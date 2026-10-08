#include <iostream>
using namespace std;

class Patient {
protected:
    string name;
    int id, age;

public:
    Patient(string n, int i, int a) {
        name = n;
        id = i;
        age = a;
    }
};

class InPatient : public Patient {
    float roomCharge;
    int days;

public:
    InPatient(string n, int i, int a, float r, int d)
        : Patient(n, i, a) {
        roomCharge = r;
        days = d;
    }

    void display() {
        float bill = roomCharge * days;

        cout << "Patient Name: " << name << endl;
        cout << "Patient ID: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "Total Bill: " << bill << endl;
    }
};

int main() {
    InPatient p("Kailash", 101, 19, 2000, 5);
    p.display();

    return 0;
}