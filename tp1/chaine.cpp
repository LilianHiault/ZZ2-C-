#include <iostream>
#include <string>

int main(int, char**) {
    std::string str1;
    std::string str2;

    std::cout << "Entrez une chaine" << std::endl;
    std::cin  >> str1;
    std::cout << "Taille : " << str1.length() << std::endl;
    std::cout << "Entrez une autre chaine" << std::endl;
    std::cin >> str2;
    std::cout << "Taille : " << str2.length() << std::endl;

    std::cout << ((str1.length() < str2.length()) ? str1 : str2) << std::endl;

    return 0;
}