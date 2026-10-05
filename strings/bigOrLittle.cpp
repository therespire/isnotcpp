#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char symbol;
    cin >> symbol;
    
    if (isupper(symbol)) cout << "Big letter";
    else if (islower(symbol)) cout << "Little letter";
    else cout << "That's not letter";
}
