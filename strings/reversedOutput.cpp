#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int max = s.size() - 1;
    
    for (int i = 0; i <= max; i++) {
        cout << s[max - i];
    }
}
