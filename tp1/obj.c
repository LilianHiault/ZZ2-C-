#include <stdio.h>

struct Exemple
{
    void afficher()
    {
        printf("hello\n");
    }
};

int main(int, char **)
{

    struct Exemple e;

    e.afficher();

    return 0;
}
