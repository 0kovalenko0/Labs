#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int n, x=0, y=0;
    int mat[30][30];

    std::cout << "Задайте размер квадратной матрицы: \n";
    std::cin >> n;
    std::cout << "Введите элементы матрицы: \n";
    for (x = 0; x < n; x++)
        for (y = 0; y < n; y++) 
            std::cin >> mat[x][y];
    
    int diag_r = 0, diag_l = 0;
    
    for (x = 0; x < n; x++)
        diag_l = diag_l + mat[x][x];
    for (x = 0; x < n; x++)
        diag_r = diag_r + mat[x][n-x-1];

    std::cout << "Левая диагональ - " << diag_l;
    std::cout << "\nПравая диагональ - " << diag_r;

}
