
#include <iostream>
#include <stdlib.h>

using namespace std;

struct complex
{
    double a;
    double b;
};


int showChoice()
{
    cout << "Введите один из представленных ниже символов для совершения операции.\n";
    cout << "+  Сложение \n-  Вычитание \n:  Деление\n*  Умножение\n";
    cout << "Введите q что бы выйти из программы.\n";
    return 1;
}

complex add(complex n1, complex n2)
{
    complex result;
    result.a = n1.a + n2.a;
    result.b = n1.b + n2.b;
    return result;
}

complex substruct(complex n1, complex n2)
{
    complex result;
    result.a = n1.a - n2.a;
    result.b = n1.b - n2.b;
    return result;
}

complex multiply(complex n1, complex n2)
{
    complex result;                            //z=z1⋅z2=(a1a2−b1b2)+(a1b2+b1a2)i
    result.a = n1.a * n2.a - n1.b * n2.b;
    result.b = n1.a * n2.b + n1.b * n2.a;
	return result;
}

complex divide(complex n1, complex n2)
{
	complex result;
	result.a = (n1.a * n2.a + n1.b * n2.b) / (n2.a * n2.a + n2.b * n2.b);
	result.b = (n2.a * n1.b - n1.a * n2.b) / (n2.a * n2.a + n2.b * n2.b);
	return result;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    char choice = 0;
    complex n1, n2, result;

    showChoice();

	for (; ; ) {
		cin >> choice;
		if (choice == '+') {
			cout << "Введите вещественные и мнимые части двух чисел.\n";
			cin >> n1.a >> n1.b;
			cout << endl;
			cin >> n2.a >> n2.b;
			result = add(n1, n2);
			cout << result.a << " + " << result.b << "i" << endl;
		}
		else if (choice == '-') {
			cout << "Введите вещественные и мнимые части двух чисел.\n";
			cin >> n1.a >> n1.b;
			cout << endl;
			cin >> n2.a >> n2.b;
			result = substruct(n1, n2);
			cout << result.a << " + " << result.b << "i" << endl;
		}
		else if (choice == '*') {
			cout << "Введите вещественные и мнимые части двух чисел.\n";
			cin >> n1.a >> n1.b;
			cout << endl;
			cin >> n2.a >> n2.b;
			result = multiply(n1, n2);
			cout << result.a << " + " << result.b << "i" << endl;
		}
		else if (choice == ':') {
			cout << "Введите вещественные и мнимые части двух чисел.\n";
			cin >> n1.a >> n1.b;
			cout << endl;
			cin >> n2.a >> n2.b;
			result = divide(n1, n2);
			cout << result.a << " + " << result.b << "i" << endl;
		}
		else if (choice == 'q')
			break;
		else
			cout << "Пожалуйста, введите значение. \n";
	}
}


