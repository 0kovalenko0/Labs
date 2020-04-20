#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int a[30][30], b[30][30], m, n, c[30][30], x, y;
    std::cout << "Задайте размеры матриц m x n: \n";
    std::cout << "m = ";
    std::cin >> m;
    std::cout << "n = ";
    std::cin >> n;

    std::cout << "Задайте элементы первой матрицы: \n";
    for (x = 0; x < m; x++)
        for (y = 0; y < n; y++) 
            std::cin >> a[x][y];

    std::cout << "Задайте элементы второй матрицы: \n";
    for (x = 0; x < m; x++)
        for (y = 0; y < n; y++) 
            std::cin >> b[x][y];

    for (x = 0; x < m; x++)
        for (y = 0; y < n; y++) 
            c[x][y] = a[x][y] + b[x][y];

    for (x = 0; x < m; x++)
        for (y = 0; y < n; y++) 
            std::cout << c[x][y] << "|";
   
}






