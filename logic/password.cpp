#include <iostream>
#include <string>
using namespace std;
int main() {
    string pass;
    cin >> pass;
    if (pass == "password") {
        cout << "Correct password!";
    }
    else {
        cout << "Incorrect password!";
    }
}
