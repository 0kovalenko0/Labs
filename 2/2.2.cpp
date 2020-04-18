#include <iostream>
void main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    double D, x1, x2;
    std::cout << "Введите коэффициент a: \n";
    std::cin >> a;
    std::cout << "Введите коэффициент b: \n";
    std::cin >> b;
    std::cout << "Введите коэффициент c: \n";
    std::cin >> c;

    D = (b * b) - (4 * a * c); 
    std::cout << "Дискриминант = " << D << "\n"; 
    if (D == 0) 
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        std::cout << "x = " << x1;
    }
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        std::cout << "x1 = " << x1;
        std::cout << ", x2 = " << x2;
    }
    if (D < 0) //Если дискриминант меньше нуля - нет корней.
    {
        std::cout << "Нет корней.";
    }
}
