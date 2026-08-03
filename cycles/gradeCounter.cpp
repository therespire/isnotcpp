#include <iostream>
using namespace std;

int main() {
	int n, grade;
	float x = 0;
	
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> grade;
		x += grade;
	}
	
	cout << x / n;
}
