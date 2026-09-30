#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    
    for (int i = 0; i <= s.size()-1; i++) {
        t += s[s.size()-1-i];
    }
    
    if (s == t) cout << "yes";
    else cout << "no";
}
