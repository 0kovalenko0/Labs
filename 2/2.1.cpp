
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите три угла.\n";
    int a, b, c;
    std::cout << "Введите первый угол: ";
    std::cin >> a;
    std::cout << "Введите второй угол: ";
    std::cin >> b;
    std::cout << "Введите третий угол: ";
    std::cin >> c;
    
    if (a * b * c == 0) {
        std::cout << "В треугольнике не должно быть угла в 0 градусов.";
        return 0;
        }

    if (a + b + c == 180) {
            std::cout << "Треугольник действителен.";
        }
        else {
            std::cout << "Сумма углов должна равняться 180 градусам.";
        }
 }
