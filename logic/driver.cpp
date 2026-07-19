#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age >= 18) {
        cout << "Cool! I have driver's license!";
    }
    else {
        cout << "You can only get a license at the age of 18!";
    }
}
