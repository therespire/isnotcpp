#include <iostream>
using namespace std;

int main() {
    int a[100][100] = {0};
    int n, m;
    float count = 0;
    float fin = 0;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            count += a[i][j];
        }
    }
    
    fin = count / (n * m);
    cout << fin;
}
