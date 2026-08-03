// cool stuff for count a GPA
#include <iostream>
using namespace std;

int main() {
	int n, grade;
	float x = 0;
	
	cout << "enter how many grades you have: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> grade;
		x += grade;
	}
	
	cout << "your GPA: " << x / n;
}
