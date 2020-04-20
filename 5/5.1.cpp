#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int i, n;
    double sum, aver, arr[30];
    sum = 0, aver = 0;

    std::cout << "Введите размер массива:\n";
    std::cin >> n;
    std::cout << "Введите элементы массива:\n";

    for (i = 0; i < n; i++) 
        std::cin >> arr[i];

    for (i = 0; i < n; i++) 
        sum = sum + arr[i];
    if (n != 0) 
        aver = sum / n;

    std::cout << "\nСумма элементов массива - " << sum;
    std::cout << "\nСреднее арифметическое значение элементов массива - " << aver;
}

