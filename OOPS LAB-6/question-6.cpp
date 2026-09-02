#include <iostream>
using namespace std;

void longest(int *p, int n)
{
    int max = *p;

    for(int i = 1; i < n; i++)
    {
        p++;

        if(*p > max)
            max = *p;
    }

    cout << "Longest: " << max << " minutes";
}

int main()
{
    int a[6] = {30, 45, 25, 60, 40, 50};

    longest(a, 6);

    return 0;
}