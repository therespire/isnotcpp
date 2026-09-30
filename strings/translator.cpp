#include <iostream>
#include <string>
using namespace std;

int main() {
    string message;
    getline(cin, message);
    
    if (message == "Hello") cout << "Привет";
    else if (message == "Bye") cout << "Пока";
    else if (message == "How are you") cout << "Как дела";
    else if (message == "I love you") cout << "Я люблю тебя";
    else if (message == "Good") cout << "Хорошо";
    else cout << "Ошибка перевода";
}
