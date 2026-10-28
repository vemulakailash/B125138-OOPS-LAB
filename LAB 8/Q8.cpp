#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual double calculateCost(double hours) {
        return 0;
    }
};

class StandardInstance : public CloudResource {
public:
    double calculateCost(double hours) override {
        double cost = hours * 5;
        if (hours > 100)
            cost = cost * 0.85;
        return cost;
    }
};

class PremiumInstance : public CloudResource {
public:
    double calculateCost(double hours) override {
        double cost = hours * 12;
        if (hours > 100)
            cost = cost * 0.85;
        return cost;
    }
};

int main() {
    double hours;
    cout << "Enter CPU hours: ";
    cin >> hours;

    StandardInstance s;
    PremiumInstance p;

    cout << "Standard cost: Rs. " << s.calculateCost(hours) << endl;
    cout << "Premium cost: Rs. " << p.calculateCost(hours) << endl;

    return 0;
}