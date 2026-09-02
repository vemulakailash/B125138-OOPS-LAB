#include <iostream>
using namespace std;

int main()
{
    int a[8] = {1,2,3,4,5,6,7,8};
    int pos, value;

    cout << "Before: ";
    for(int i = 0; i < 8; i++)
        cout << a[i] << " ";

    cout << "\nEnter position: ";
    cin >> pos;

    cout << "Enter new seat number: ";
    cin >> value;

    *(a + pos) = value;

    cout << "After: ";
    for(int i = 0; i < 8; i++)
        cout << a[i] << " ";

    return 0;
}
