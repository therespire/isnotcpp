#include <iostream>
using namespace std;

int main() {
	int n;
	
	for (int i = 0; i <= 9; i++) {
		cin >> n;
		
		if (n > 3) {
			cout << n << ' ';
		}
	}
}
