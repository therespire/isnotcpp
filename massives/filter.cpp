#include <iostream>
using namespace std;

int main() {
    float a[8] = { 100.5, 200, 440, 51, 96, 29.5, 47, 153 };
    
    for (int i = 0; i < 8; i++) {
        if (a[i] > 100) cout << a[i] << endl;
    }
}
