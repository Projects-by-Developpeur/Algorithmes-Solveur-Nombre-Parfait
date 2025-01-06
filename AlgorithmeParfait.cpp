#include <iostream>

int main() {
    int nombre;
    std::cout << "Entrez un nombre: ";
    std::cin >> nombre;

    int sommeDiviseurs = 0;

    for (int i = 1; i < nombre; ++i) {
        if (nombre % i == 0) {
            sommeDiviseurs += i;
        }
    }

    if (sommeDiviseurs == nombre) {
        std::cout << nombre << " est un nombre parfait." << std::endl;
    } else {
        std::cout << nombre << " n'est pas un nombre parfait." << std::endl;
    }

    return 0;
}