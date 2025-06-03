#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Numbers in reverse:" << std::endl;
    for (int i = 0; i <= numbers.size(); i++) {
        std::cout << numbers[numbers.size() - i - 1] << std::endl;
    }

    return 0;
}
