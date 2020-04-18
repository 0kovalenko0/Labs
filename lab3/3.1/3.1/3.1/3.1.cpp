
#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int a=0, b=0, c=0;
    float s, p;

    std::cout << "Введите три стороны треугольника \n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    p = ((float)a + b + c) / 2;
    s = sqrt((float)p * (p - a) * (p - b) * (p - c));
    std::cout << "Площадь треугольника - " << s;

}


