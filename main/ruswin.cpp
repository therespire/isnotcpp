#include <iostream>
int main() 
{
    // Устанавливаем русскую локализацию
    setlocale(LC_ALL, "Russian");
    std::cout << "Привет, мир!";
}
