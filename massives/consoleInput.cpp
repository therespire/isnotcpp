#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;

    cin >> n;
    for (int j = 0; j < n; j++) {
        cin >> arr[j];
    }
  
	  for(int i = 0; i < n; ++i)
	  {
		  cout << arr[i] << " ";
	  }
}
