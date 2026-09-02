#include <iostream>
using namespace std;
int main()
{
    int a[6] = {101, 102, 103, 104, 105, 106};
    int *p = a;
    for(int i = 0; i < 6; i++)
    {
        cout << *p << "  " << p << endl;
        p++;
    }
    return 0;
}