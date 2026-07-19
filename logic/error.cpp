#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (x == 'y') {
        cout << "yes";
    }
    else if (x == 'n') {
        cout << "no";
    }
    else {
        cout << "error";
    }
}
