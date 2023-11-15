#include <iostream>
#include <cmath>

namespace Geometria {

    class Pentagono {
    private:
        double lado_;

    public:

        Pentagono(double lado) : lado_(lado) {}


        double calcularArea() const {
            return 0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * lado_ * lado_;
        }


        double calcularPerimetro() const {
            return 5 * lado_;
        }
    };
}

int main() {

    Geometria::Pentagono miPentagono(3.0);

    std::cout << "Área del pentágono: " << miPentagono.calcularArea() << std::endl;

    std::cout << "Perímetro del pentágono: " << miPentagono.calcularPerimetro() << std::endl;

    return 0;
}
