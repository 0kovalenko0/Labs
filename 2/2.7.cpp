#include <iostream>

int main()
{

	setlocale(LC_ALL, "Russian");

	int digit;
	int sum_pos = 0, sum_neg = 0, sum_zero = 0;
	std::cout << "Введите число чтобы продолжить. Введите любой другой символ для завершения. \n";

	for ( ; ; )
	{
		std::cin >> digit;
		std::cout << "\n";

		if (std::cin.fail())
			break;

		if (digit > 0)
			sum_pos++;
		else if (digit == 0)
			sum_zero++;
		else if (digit < 0)
			sum_neg++;
	}
	std::cout << "\n";
	std::cout << "Введено " << sum_pos << " положительных чисел, " << sum_zero << " нулевых значений, " << sum_neg << " отрицательных чисел.";
}

