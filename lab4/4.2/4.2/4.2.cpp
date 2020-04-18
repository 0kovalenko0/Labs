
#include <iostream>

int zero_small(int &x, int &y)
{
    if (x > y)
        y = 0;
    else if (x < y)
        x = 0;
    return 0;
}


int main()
{
    setlocale(LC_ALL, "Russian");

    int x, y;

    std::cout << "Введите два числа:\n";
    std::cin >> x;
    std::cin >> y;
    
    zero_small(x, y);
    std::cout << x << " " << y;
}


