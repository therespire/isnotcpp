#include <iostream>
using namespace std;

int main() {
    const int c = 1000;
    float arr[c];
    float temp;
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int k = 0; k < n; k++) {
        cout << arr[k] << ' ';
    }
}
