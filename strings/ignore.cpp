#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;

    cin >> age;
    cin.ignore();
    getline(cin, name);

    cout << name << " is " << age << " years old.";
}
