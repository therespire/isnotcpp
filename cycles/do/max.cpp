#include <iostream>
using namespace std;

int main() {
    int x;
    
    cin >> x;
    int m = x;
    
    while (x != 0) {
        cin >> x;
        if (x > m) m = x;
    }
    cout << m;
}
