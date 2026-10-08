#include <iostream>
using namespace std;

class Person {
public:
    string name;

    Person() {
        cout << "Person constructor" << endl;
        name = "Kailash";
    }
};

class Employee : public Person {
public:
    int id;

    Employee() {
        cout << "Employee constructor" << endl;
        id = 101;
    }
};

class Manager : public Employee {
public:
    float salary;

    Manager() {
        cout << "Manager constructor" << endl;
        salary = 50000;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Manager m;
    m.display();

    return 0;
}