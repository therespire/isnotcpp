#include <iostream>
using namespace std;

int main() {
	int grade;
	
	for (int i = 0; i < 10; i++) {
		cin >> grade;
		
		if (grade == 2) {
			cout << "😢";
		}
		
		if (grade == 3) {
			cout << "😐";
		}
		
		if (grade == 4) {
			cout << "🙂";
		}
		
		if (grade == 5) {
			cout << "😊";
		}
	}
}
