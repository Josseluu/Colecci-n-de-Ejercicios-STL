#include <iostream>
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
    std::cout << "Suma: " << Matematicas::suma(30, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(20, 3) << std::endl;
     return 0;
}