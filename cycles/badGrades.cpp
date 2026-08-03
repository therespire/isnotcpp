#include <iostream>
using namespace std;

int main() {
	int grade;
	int counter = 0;
	
	for (int i = 0; i < 10; i++) {
		cin >> grade;
		
		if (grade == 2) {
			counter += 1;
		}
	}
	
	cout << counter;
}
