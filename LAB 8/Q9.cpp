#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {
        cout << "Robot is moving\n";
    }
};

class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Wheeled robot time: " << distance / 2 << " seconds\n";
    }
};

class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Tracked robot time: " << distance / 1.2 << " seconds\n";
    }
};

int main() {
    double distance;
    cout << "Enter distance in metres: ";
    cin >> distance;

    WheeledRobot w;
    TrackedRobot t;

    Robot *r;

    r = &w;
    r->move(distance);

    r = &t;
    r->move(distance);

    return 0;
}