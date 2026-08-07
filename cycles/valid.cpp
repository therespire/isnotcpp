#include <iostream>
using namespace std;

int main() {
    bool valid = true;
    int n;
    cin >> n;
    
    if (n == 1) {
        valid = false;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            valid = false;
            break;
        }
    }
    
    if (valid) {
        cout << "yes";
    }
    
    else {
        cout << "no";
    }
}
