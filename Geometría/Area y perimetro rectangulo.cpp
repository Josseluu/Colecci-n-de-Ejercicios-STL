#include <iostream>

namespace Geometria {

    class Rectangulo {
    private:
        double longitud_;
        double ancho_;

    public:
        Rectangulo(double longitud, double ancho) : longitud_(longitud), ancho_(ancho) {}

        double calcularArea() const {
            return longitud_ * ancho_;
        }
        double calcularPerimetro() const {
            return 2 * (longitud_ + ancho_);
        }
    };
}

int main() {
    Geometria::Rectangulo miRectangulo(5.0, 3.0);

    std::cout << "Área del rectángulo: " << miRectangulo.calcularArea() << std::endl;

    std::cout << "Perímetro del rectángulo: " << miRectangulo.calcularPerimetro() << std::endl;

    return 0;
}