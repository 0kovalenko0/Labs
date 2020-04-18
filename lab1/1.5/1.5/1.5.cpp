
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число: ";
    int a;
    std::cin >> a;

    a > 0 ? std::cout << "Число положительное." : std::cout << "Число отрицательное (или равно нулю).";
}
