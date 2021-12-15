#include <iostream>
#include <string>

int main(int, char**) {
    std::string prenom;
    std::string nom;
    int age;
    std::cout << "Quel est votre prénom ?" << std::endl;
    std::cin  >> prenom;
    std::cout << "Quel est votre nom ?" << std::endl;
    std::cin >> nom;
    std::cout << "Quel est votre age ?" << std::endl;
    std::cin  >> age ;
    std::cout << "Bonjour "<< prenom << " : " << nom << std::endl;

    return 0;
}