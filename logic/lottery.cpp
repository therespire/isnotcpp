#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    if (x > 9 && x < 100) {
        if (x % 10 == x / 10) {
            cout << "you win!";
        }
        
        else {
            cout << "numbers is not match";
        }
    
    }
    
    else {
        cout << "error";
    }
}
