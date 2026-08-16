#include <iostream>
using namespace std;

int main() {
    int n;
    int c = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        c++;
        for (int j = 0; j < c; j++) {
            cout << "#";
        }
        cout << endl;
    }
}
