#include <iostream>
using namespace std;

int main() {
    float arr[1000];
    float max;
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    max = arr[0];
    for (int j = 0; j < n; j++) {
        if (arr[j] > max) max = arr[j];
    }
    
    cout << max;
}
