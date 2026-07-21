// base calculator
#include <iostream>
using namespace std;

int main() {
	int a, b;
	char o;
	
	cin >> a >> o >> b;
	
	if (o == '+') {
		cout << a + b;
	}
	
	else if (o == '-') {
		cout << a - b;
	}
	
	else if (o == '*') {
		cout << a * b;
	}
	
	else if (o == '/') {
		if (b == 0) {
			cout << "division at 0";
		}
		
		else {
			cout << a / b;
		}
	}
}
