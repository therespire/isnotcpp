#include <iostream>
using namespace std;

int main() {
  int age = 0;

  while (age != -1) {
    cin >> age;

    if (age == 0) {
      cout << "BRUH, bro, will you? I am afraid... :skull:" << endl;
    }

    else if (age == 16) {
      cout << "yeah, correct, 16 years old is good age" << endl;
    }

    else {
      cout << "sorry, try again." << endl;
    }
  }
}
