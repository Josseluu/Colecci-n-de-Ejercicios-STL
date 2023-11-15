#include <iostream>
#include <cmath>

namespace Geometria {
    double calcularAreaHexagono(double lado) {
        return 3 * sqrt(3) * pow(lado, 2) / 2;
    }
}

int main() {
    double ladoHexagono = 5.0;

    double areaHexagono = Geometria::calcularAreaHexagono(ladoHexagono);
    std::cout << "Área del hexágono: " << areaHexagono << std::endl;

    return 0;
}
