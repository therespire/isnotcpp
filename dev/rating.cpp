#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int n, s;
    cin >> n;
    
    cout << "Player rating:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> name >> s;
        
        cout << name << ' ';
        for (int j = 0; j < s; j++) {
            cout << "⭐";
        }
        cout << endl;
    }
}
