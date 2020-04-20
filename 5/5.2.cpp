#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int arr[30];
    int i, n;

    std::cout << "Введите размер массива:\n";
    std::cin >> n;
    std::cout << "Введите элементы массива:\n";

    for (i = 0; i < n; i++)
        std::cin >> arr[i];
    
    for (i = 0; i < n; i++)
        std::cout << arr[n - i - 1];
   
}

