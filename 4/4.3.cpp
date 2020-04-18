#include <iostream>
#include <stdlib.h>

using namespace std;


int showChoice()
{
    cout << "Введите один из представленных ниже символов для совершения операции.\n";
    cout << "+  Сложение \n-  Вычитание \n:  Деление\n*  Умножение\n";
    cout << "Введите q что бы выйти из программы.\n";
	return 1;
}

float add(float x, float y)
{
	return x + y;
}

float substruct(float x, float y)
{
	return x - y;
}

float multiply(float x, float y)
{
	return x * y;
}

float divide(float x, float y)
{
	return x / y;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	char choice = 0;
	float x, y;


	showChoice();

														//должен отметить, что в условии не написано, нужно ли что бы оно продолжало делать одну и ту же операцию
														//пока пользователь не выйдет из неё. поэтому сделал как сделал.
	for (; ; ) {
		cin >> choice;
		if (choice == '+'){
			cout << "Введите два значения.\n";
			cin >> x;
			cin >> y;
			cout << add(x, y) << "\n\n";
		}
		else if (choice == '-') {
			cout << "Введите два значения.\n";
			cin >> x;
			cin >> y;
			cout << substruct(x, y) << "\n\n";
		}
		else if (choice == '*') {
			cout << "Введите два значения.\n\n";
			cin >> x;
			cin >> y;
			cout << multiply(x, y) << "\n\n";
		}
		else if (choice == ':') {
			cout << "Введите два значения.\n";
			cin >> x;
			cin >> y;
			cout << divide(x, y) << "\n\n";
		}
		else if (choice == 'q')
			break;
		else
			cout << "Пожалуйста, введите значение. \n";
	}
}
