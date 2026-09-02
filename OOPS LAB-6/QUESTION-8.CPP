#include <iostream>
using namespace std;

void addMarks(int *p, int n)
{
    for(int i = 0; i < n; i++)
    {
        *p = *p + 5;
        p++;
    }
}
int main()
{
    int n;
    int marks[100];
    cout << "Enter number of students: ";
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> marks[i];
    cout << "Before: ";
    for(int i = 0; i < n; i++)
        cout << marks[i] << " ";
    addMarks(marks, n);
    cout << "\nAfter: ";
    for(int i = 0; i < n; i++)
        cout << marks[i] << " ";

    return 0;
}