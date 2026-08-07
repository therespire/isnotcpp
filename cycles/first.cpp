#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 2; i < 10000000; ++i) {
		if (n % i == 0) {
			cout << i << endl;
			break;
		}
	}
}
