#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }

    virtual void calculateResult() {
        cout << "Student Result" << endl;
    }
};

class RegularStudent : public Student {
public:
    RegularStudent(string n, int r) : Student(n, r) {}

    void calculateResult() {
        int marks = 80 + 75 + 85;
        cout << "Regular Student Total: " << marks << endl;
    }
};

class ScholarshipStudent : public Student {
public:
    ScholarshipStudent(string n, int r) : Student(n, r) {}

    void calculateResult() {
        int marks = 80 + 75 + 85 + 5;
        cout << "Scholarship Student Total: " << marks << endl;
    }
};

int main() {
    RegularStudent r("A", 1);
    ScholarshipStudent s("B", 2);

    r.calculateResult();
    s.calculateResult();

    return 0;
}