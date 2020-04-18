
#include <iostream>
#include <stdio.h>
#include <algorithm>

int main()
{
    setlocale(LC_ALL, "Russian");
    double predmet1, predmet2, predmet3, predmet4, predmet5;
    double procent;

    std::cout << "Введiть 5 предметiв.";
    std::cin >> predmet1;
    std::cin >> predmet2;
    std::cin >> predmet3;
    std::cin >> predmet4;
    std::cin >> predmet5;

    procent = (((predmet1 + predmet2 + predmet3 + predmet4 + predmet5)/500)*100);
    std::cout << procent << "%.";
    if (procent >= 60)
        std::cout << " 1 подiл.";
    else if (procent >= 50) 
            std::cout << " 2 подiл.";
    else if (procent >= 40)
            std::cout << " 3 подiл.";
    else if (procent < 40) 
            std::cout << " Невдача.";
    
}





