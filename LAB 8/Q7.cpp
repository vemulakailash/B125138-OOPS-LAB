#include <iostream>
using namespace std;

class MatchFormat {
public:
    virtual int calculateTarget(int score) {
        return score;
    }
};

class T20Match : public MatchFormat {
public:
    int calculateTarget(int score) override {
        int margin = score * 1 / 100;

        if (score % 100 != 0)
            margin++;

        return score + margin;
    }
};

class ODIMatch : public MatchFormat {
public:
    int calculateTarget(int score) override {
        int margin = score * 2 / 100;

        if (score * 2 % 100 != 0)
            margin++;

        return score + margin;
    }
};

int main() {
    int score;
    cout << "Enter first innings score: ";
    cin >> score;

    T20Match t;
    ODIMatch o;

    cout << "T20 target: " << t.calculateTarget(score) << endl;
    cout << "ODI target: " << o.calculateTarget(score) << endl;

    return 0;
}