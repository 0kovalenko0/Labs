
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите n: ";

    int n=0;
    double sum=1;
    
    std::cout << "";
    std::cin >> n;

    for (int i = 2; i <= n; i = i + 1)
    {
        sum = sum + 1.0 / i;
    }
    std::cout << sum;
}


