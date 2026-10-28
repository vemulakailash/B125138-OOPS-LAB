#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual double calculateWater(double moisture) {
        return 0;
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) override {
        return 2 * (100 - moisture);
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) override {
        return 3 * (100 - moisture);
    }
};

int main() {
    double moisture;
    cout << "Enter soil moisture percentage: ";
    cin >> moisture;

    DripIrrigation d;
    SprinklerIrrigation s;

    cout << "Drip water: " << d.calculateWater(moisture) << " litres\n";
    cout << "Sprinkler water: " << s.calculateWater(moisture) << " litres\n";

    return 0;
}