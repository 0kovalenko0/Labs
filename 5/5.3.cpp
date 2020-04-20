#include <iostream>
#include <cstdlib>

int main()
{
    setlocale(LC_ALL, "Russian");

    int i, n;
    int arr[40];
 
    std::cout << "Введите размер массива:\n";
    std::cin >> n;

    std::cout << "Введите элементы массива:\n";

    for (i = 0; i < n; i++)
        std::cin >> arr[i];

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++)
        if (arr[i] < min)
            min = arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
  
    std::cout <<"Минимальный элемент - "<<min;
    std::cout <<"\nМаксимальный элемент - "<< max;

}