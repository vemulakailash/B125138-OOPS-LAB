#include <iostream>
using namespace std;

class Character {
public:
    virtual void attack() {
        cout << "Character attacks\n";
    }
};

class Warrior : public Character {
public:
    int strength;
    Warrior(int s) 
    { 
        strength = s;
     }

    void attack() override {
        cout << "Warrior damage: " << 20 + 2 * strength << endl;
    }
};

class Archer : public Character {
public:
    int agility;
    Archer(int a) {
         agility = a; 
        }

    void attack() override {
        cout << "Archer damage: " << 15 + 3 * agility << endl;
    }
};

int main() {
    int s, a;
    cout << "Enter warrior strength: ";
    cin >> s;
    cout << "Enter archer agility: ";
    cin >> a;

    Warrior w(s);
    Archer ar(a);
    w.attack();
    ar.attack();

    return 0;
}