#include <iostream>
using namespace std;

int numbers(int a, int b)
{
	int i = (a > b) ? a : b;

	return i;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;

	cout << "Введите два числа. \n";
	cin >> a;
	cin >> b;
	cout << numbers(a, b);

}