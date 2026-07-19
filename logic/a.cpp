#include <iostream>
using namespace std;

int main() {
	float x;
	cin >> x;
	
	if (x > 1 && x < 3) {
		cout << "yes";
	}
	
	else if (x > -2 && x < -1) {
		cout << "yes";
	}
	
	else {
		cout << "no";
	}
}
