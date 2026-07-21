#include <iostream>
using namespace std;

int main() 
{
    char x;
    cin >> x;
    
    if (x == 'y') {
        cout << "YES";
    }
    
    else if (x == 'n') {
        cout << "NO";
    }
    
    else {
        cout << "ERROR";
    }
}
