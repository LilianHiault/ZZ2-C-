#include <iostream>

void echange(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void pechange(int * a, int * b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 3;
    int b = 5;
    // int &c = a;
    
    std::cout << a << " " << b << std::endl;
    echange(a, b);
    std::cout << a << " " << b << std::endl;
    pechange(&a, &b);
    std::cout << a << " " << b << std::endl;

    // std::cout << a << " " << b << " " << c << std::endl;
    // b = 4;
    // std::cout << a << " " << b << " " << c << std::endl;
    // c = 5;
    // std::cout << a << " " << b << " " << c << std::endl;
    // a = 6;
    // std::cout << a << " " << b << " " << c << std::endl;
}