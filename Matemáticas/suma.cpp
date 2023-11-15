#include <iostream>
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }}



int main() {
    std::cout << "Suma: " << Matematicas::suma(30, 3) << std::endl;
     return 0;
}