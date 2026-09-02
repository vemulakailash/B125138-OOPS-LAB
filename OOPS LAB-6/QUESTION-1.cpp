#include <iostream>
using namespace std;
int main()
{
    int battery = 50;
    int *p = &battery;
    cout << "Battery: " << *p << "%" << endl;
    *p = *p+20; 