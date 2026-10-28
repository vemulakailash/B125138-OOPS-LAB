#include <iostream>
using namespace std;

class Delivery {
public:
    virtual double estimateTime(double distance) {
        return 0;
    }
};

class BikeDelivery : public Delivery {
public:
    double estimateTime(double distance) override {
        return (distance / 20) * 60 + 5;
    }
};

class DroneDelivery : public Delivery {
public:
    double estimateTime(double distance) override {
        return (distance / 40) * 60 + 2;
    }
};

int main() {
    double distance;
    cout << "Enter distance in km: ";
    cin >> distance;

    BikeDelivery b;
    DroneDelivery d;

    cout << "Bike delivery time: " << b.estimateTime(distance) << " minutes\n";
    cout << "Drone delivery time: " << d.estimateTime(distance) << " minutes\n";

    return 0;
}