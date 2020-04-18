#include <iostream>
#include <random>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(10, 100);

    int random = distribution(generator);
    int guess;
    int tries=0;

    std::cout << "Угадайте загаданное число!\nВведите число от 1 до 100: \n";

    do {
        std::cin >> guess;

        if (guess > random)
            std::cout << "Загаданное число меньше введённого!\n";
        else if (guess < random)
            std::cout << "Загаданное число больше введённого!\n";

        tries++;
    } while (random != guess);

    std::cout << "\nВы угадали! Загаданное число - " << random << "! И всего лишь за " << tries << " попыток!";

}


