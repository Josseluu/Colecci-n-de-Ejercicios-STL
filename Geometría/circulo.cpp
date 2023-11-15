#include <iostream>
namespace Geometria {
    double calcularAreaCirculo(double radio) {
        return 3.14 * radio * radio;
    }
}

int main() {

    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(33) << std::endl;
    return 0;
}
