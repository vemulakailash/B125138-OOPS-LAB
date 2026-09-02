#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char a[100];
    int digit = 0, alpha = 0, space = 0;
    cout << "Enter sentence: ";
    cin.getline(a, 100);
    char *p = a;
    while(*p != '\0')
    {
        if(isdigit(*p))
            digit++;
        else if(isalpha(*p))
            alpha++;
        else if(*p == ' ')
            space++;

        p++;
    }
    cout << "Digits: " << digit << endl;
    cout << "Alphabets: " << alpha << endl;
    cout << "Spaces: " << space << endl;

    return 0;
}