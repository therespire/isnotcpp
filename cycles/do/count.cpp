#include <iostream>
using namespace std;

int main() {
    int x;
    int c = 0;

    do {
        cin >> x;
        cout << x << ' ';
        c++;
    }
    while(x != 0);
    cout << endl;
    cout << "Count numbers: " << c;

}
