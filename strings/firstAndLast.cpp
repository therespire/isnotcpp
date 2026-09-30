#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    getline(cin, word);
    cout << word[0] << ' ' << word[word.size() - 1];
}
