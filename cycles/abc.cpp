#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	for (int i = 0; i < a; i++) {
		cout << 'A';
	}
	
	cout << "\n";
	
	for (int j = 0; j < b; j++) {
		cout << 'B';
	}
	
	cout << "\n";
	
	for (int k = 0; k < c; k++) {
		cout << 'C';
	}
}
