#include <iostream>
#include <string>

void addSpaces(const char* &str) {
    
    char *temp = new char(sizeof(str)*2);
    char *start = temp;

    while (*str != '\0') {
        *temp++ = *str++;
        *temp++ = ' ';
    }

    str = start;
}


int main() {
    std::string str = "Hello World";
    const char* ptr = str.c_str();
    std::cout<<"string is: "<<ptr<<std::endl;
    addSpaces(ptr);

    std::cout<<"string is: "<<ptr<<std::endl;
    return 0;
}