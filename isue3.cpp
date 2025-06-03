#include <iostream>
#include <string>

void printCharacters(const std::string& str) {
    for (int i = 0; i <= str.length(); i++) {
        std::cout << "Character " << i << ": " << str[i] << std::endl;
    }
}

int main() {
    std::string name = "Alice";
    printCharacters(name);
    return 0;
}
