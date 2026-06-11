#include <iostream>
int main() 
{
    // Устанавливаем кодировку chcp 1251
    std::system("chcp 1251 > nul");
    std::cout << "Привет, мир!";
}
