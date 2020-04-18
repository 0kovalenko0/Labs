
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    char ch;
    std::cout << "Введите символ.";
    std::cin >> ch;

    std::cout << "Значение в ASCII: " << static_cast<int>(ch) << "\n";
    if (static_cast<int>(ch) <= 47)
        std::cout << "Служебный символ.";
    else if (static_cast<int>(ch) <= 57)
        std::cout << "Цифра.";
    else if (static_cast<int>(ch) <= 64)
        std::cout << "Служебный символ.";
    else if (static_cast<int>(ch) <= 90)
        std::cout << "Большая буква.";
    else if (static_cast<int>(ch) <= 96)
        std::cout << "Служебный символ.";
    else if (static_cast<int>(ch) <= 122)
        std::cout << "Маленькая буква";
    else if (static_cast<int>(ch) <= 127)
        std::cout << "Служебный символ.";
    
}
