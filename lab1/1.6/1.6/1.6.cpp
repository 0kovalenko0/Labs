
#include <iostream>


int main()
{
    setlocale(LC_ALL, "Russian");
    
    int days;
    int months;
    int years;

    std::cout << "Введите число дней: ";
    std::cin >> days;

    years = (days / 365);
    months = (days - years*365) / 30;
    

    std::cout << years << " лет, " << months << " месяцев, " << (days - years * 365 - months*30) << " дней. ";
    
}
