
#include <iostream>
#include <random>

int main()
{
    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(10, 100);

    int random = distribution(generator);
    std::cout << random;
}


