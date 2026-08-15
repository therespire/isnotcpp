#include <iostream>
using namespace std;

int main() {
    int p = 0, n = 0;
    int num = 1;
    
    while (num != 0) {
        cin >> num;
        
        if (num > 0) p++;
        else if (num < 0) n++;
    }
    
    cout << "Positives: " << p << endl;
    cout << "Negatives: " << n << endl;
}
