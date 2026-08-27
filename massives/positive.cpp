#include <iostream>
using namespace std;

int main() {
    double arr[1000];
    int n;
    int c = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  
    for (int j = 0; j < n; j++) {
        if (arr[j] > 0) c++; 
    }

    cout << c;

}
