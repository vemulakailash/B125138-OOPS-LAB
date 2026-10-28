#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual void calculateFee(int hours) {
        cout << "Parking fee\n";
    }
};

class TwoWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 10;
        if (hours > 5)
            fee = fee * 0.9;
        cout << "Two-wheeler fee: Rs. " << fee << endl;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 30;
        if (hours > 5)
            fee = fee * 0.9;
        cout << "Four-wheeler fee: Rs. " << fee << endl;
    }
};

int main() {
    int hours;
    cout << "Enter parking hours: ";
    cin >> hours;

    TwoWheelerSlot t;
    FourWheelerSlot f;

    t.calculateFee(hours);
    f.calculateFee(hours);

    return 0;
}