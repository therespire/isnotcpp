#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    for (int i = 0; i < str.size(); i++) {
        char c = toupper(str[i]);
        cout << c;
    }
}
