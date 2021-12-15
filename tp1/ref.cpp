#include <iostream>

int main()
{
    int a = 5;
    int &r = a;

    std::cin >> r;
    std::cout << a;

    return 0;
}
