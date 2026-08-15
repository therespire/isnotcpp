#include <iostream>
using namespace std;

int main() {
    int x;
    int c = 0;
    
    do {
        cin >> x;
        c += x;
    }
    while (x >= 0);
    cout << c - x;
}
