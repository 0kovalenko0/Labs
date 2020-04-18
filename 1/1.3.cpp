#include <iostream>


int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите градусы в шкале Фаренгейта: " ;
    double f = 0;
    std::cin >> f;
    std::cout << f << " °F = " << (f - 32) * 5 / 9 << " °C";
}
