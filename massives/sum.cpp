#include <iostream>
using namespace std;

int main() {
    double arr[1000];
    double sum = 0;
    int n;

    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++) {
        sum += arr[j];
    }

    cout << sum;
}
