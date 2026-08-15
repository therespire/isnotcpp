#include <iostream>
using namespace std;

int main() {
    int n;
    int t = 0;
    
    cin >> n;
    t = n;
    cout << t << " ->";
    
    while (t != 1) {
        if (t % 2 == 0) {
            t /= 2;
            cout << ' ' << t;
        }
        
        else {
            t *= 3;
            t++;
            cout << ' ' << t;
        }
        
        if (t != 1) {
            cout << " ->";
        }
    }
    cout << '.';
}
