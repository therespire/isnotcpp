#include <iostream>
using namespace std;

int main() {
	float x, y;
	cin >> x >> y;
	
	if ((x > 2 && x < 16) && (y > 1 && y < 9)) {
		if ((x > 10 && x < 14) && (y > 3 && y < 7)) {
			cout << "green" << endl;
		}
		
		else if ((x > 4 && x < 7) && (y > 3 && y < 7)) {
			cout << "red" << endl;
		}
		
		else cout << "yellow" << endl;
	}
	
	else cout << "white" << endl;
}
