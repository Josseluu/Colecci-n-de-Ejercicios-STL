#include <iostream>
namespace Geometria {
    double calcularAreaTriangulo(double base, double altura) {
        return (base * altura) / 2;
    }
}
int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    return 0;
}
