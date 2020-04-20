#include <iostream>

int MIX(int i, int a[30], int m, int b[30], int n, int c[30], int &mn)
{
	int frt, bck;

	mn = m + n;
	frt = 0; bck = mn - 1;
	for (i = 0; i < m; i++) {
		if (a[i] % 2 == 0)
		{
			c[frt] = a[i];
			frt++;
		}
		else
		{
			c[bck] = a[i];
			bck--;
		}
	}
	for (i = 0; i < n; i++) {
		if (b[i] % 2 == 0)
		{
			c[frt] = b[i];
			frt++;
		}
		else
		{
			c[bck] = b[i];
			bck--;
		}
	}
	return mn;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, a[30], m, b[30], n, c[30], mn;

	std::cout << "Введите размер массива A: ";
	std::cin >> m;
	std::cout << "\nВведите элементы массива А: \n";
	for (i = 0; i < m; i++) 
		std::cin >> a[i];

	std::cout << "Введите размер массива B: ";
	std::cin >> n;
	std::cout << "\nВведите элементы массива B: \n";
	for (i = 0; i < n; i++) 
		std::cin >> b[i];
	MIX(i, a, m, b, n, c, mn);
	for (i = 0; i < mn; i++)
		std::cout << c[i] << "|";
	std::cout << " - " << mn << " элементов.";
		
}

