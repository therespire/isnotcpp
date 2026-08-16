#include <iostream>
using namespace std;

int x = 0;

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            x = i * j;
            if (x < 10) cout << 0;
            cout << x << ' ';
        }
        cout << endl;
    }
}
