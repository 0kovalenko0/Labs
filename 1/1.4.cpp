
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    char ch;
    std::cout << "Введите символ: ";
    std::cin >> ch;
    std::cout << "Значение в ASCII: " << static_cast<int>(ch);

}