#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    
    if (x == y) {
        cout << "matched";
    }
    
    else {
        if (x > y) {
            cout << x;
        }
        
        else {
            cout << y;
        }
    }
}
