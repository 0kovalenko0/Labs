
#include <iostream>


    using namespace std;

    int main()
    {
        setlocale(LC_ALL, "Russian");

        int n;
        int sum = 0;

        cout << "Введите число: ";
        cin >> n;

        while (n != 0)
        {
            sum = sum + (n % 10);
            n = n/10;
        }
        cout << "sum = " << sum;

    }

