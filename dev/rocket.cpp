#include <iostream>
#include <windows.h>
using namespace std;

int main() {
  int i = 10;

  while (i > 0) {

    cout << i << endl;
    Sleep(1000);
    i--;
  }
  
  cout << "start!" << endl;
  // you need a file to open it
  system("start example.mp4");
}
