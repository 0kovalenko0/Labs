
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите первое число: ";
    int a = 0;
    std::cin >> a;
    std::cout << "Ведите второе число: ";
    int b = 0;
    std::cin >> b;
    std::cout << a << "+"<< b << "=" << (a + b);


}
