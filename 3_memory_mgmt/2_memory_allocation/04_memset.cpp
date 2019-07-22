#include <iostream>

int main() {

    char *ptr = new char{'C'};
    char str[4] = "AAA";

    std::cout << "Initial ptr value : " << *ptr << "\n";
    std::cout << "Initial str array value : " << str << "\n";

    memset(ptr, 'A', 1);
    memset(str+1, 'B', 1);

    std::cout << "After ptr value : " << *ptr << "\n";
    std::cout << "After str array value : " << str << "\n";
}