#include <iostream>
using namespace std;

int main() {
    int x;
    int c = 0;
    cin >> x;
    
    do {
        x /= 10;
        c++;
    }
    while (x != 0);
    
    cout << c;
}
