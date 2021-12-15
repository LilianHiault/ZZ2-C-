#include <iostream>

int main(int, char **)
{
    int a = 4;
    int *p = nullptr;

    p = &a;
    std::cout << *p << " " << p;

    return 0;
}
