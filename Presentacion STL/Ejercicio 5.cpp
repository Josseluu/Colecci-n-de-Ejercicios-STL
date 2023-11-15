#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {

    std::vector<int> numeros;(1, 2, 3, 4, 5) ;
    numeros.push_back(6);

    std::cout << "Vector: ";
    for (const auto& numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    std::map<std::string, int> edades;
    edades["Juan"] = 25;

    std::cout << "Edad de Juan: " << edades["Juan"] << std::endl;

    edades.erase("Juan");

    std::set<int> conjunto;(1, 2, 3, 4, 5);
    conjunto.insert(6);
    conjunto.erase(1);

    std::cout << "Conjunto: ";
    for (const auto& elemento : conjunto) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}
