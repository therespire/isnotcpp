#include <iostream>
using namespace std;

int main() {
    float arr[1000];
    int index = 0;
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int j = 0; j < n; j++) {
        if (arr[j] > arr[index]) index = j;
    }
    
    cout << index;
}
