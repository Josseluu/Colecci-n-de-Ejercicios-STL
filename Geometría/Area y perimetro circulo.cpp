#include <iostream>
#include <cmath>

namespace Geometria {

    class Circulo {
    private:
        double radio_;

    public:

        Circulo(double radio) : radio_(radio) {}

        double calcularArea() const {
            return M_PI * radio_ * radio_;
        }


        double calcularPerimetro() const {
            return 2 * M_PI * radio_;
        }
    };
}

int main() {

    Geometria::Circulo miCirculo(4.0);

    std::cout << "Área del círculo: " << miCirculo.calcularArea() << std::endl;

    std::cout << "Perímetro del círculo: " << miCirculo.calcularPerimetro() << std::endl;

    return 0;
}
