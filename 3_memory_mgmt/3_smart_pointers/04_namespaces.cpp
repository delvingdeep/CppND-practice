#include <iostream>

namespace math {

    const double pi = 3.141592653;
    const double euler =  2.718281828;
    const double sqrt2 = 1.414213562;
    const double ln2 = 0.6931471;
}

int main() {

    std::cout << math::pi << std::endl;
    std::cout << math::euler << std::endl;
    std::cout << math::sqrt2 << std::endl;
    std::cout << math::ln2 << std::endl;

    return 0;
}