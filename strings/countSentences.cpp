#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    int count = 0;
    getline(cin, str);
    
    for (int i = 0; i < str.size(); i++) {
        char c = str[i];
        if (c == '.') count += 1;
        else if (c == '!') count += 1;
        else if (c == '?') count += 1;
    }
    cout << count;
}
