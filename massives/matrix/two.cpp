#include <iostream>
using namespace std;

int main() {
    int a[100][100] = {0};
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int k = 0; k < 2; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
        if (k < 1) cout << endl;
    }
}
