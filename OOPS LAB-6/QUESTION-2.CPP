#include <iostream>
using namespace std;
int main()
{
    int water = 500;
    int *p = &water;
    cout << "Water: " << *p << endl;
    *p = *p + 100;
    *p = *p - 50;
    cout << "Final Water: " << *p << endl;
    return 0;
}