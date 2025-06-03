#include <iostream>
#include <string>

bool isPalindrome(std::string str) {
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    if (isPalindrome(word)) {
        std::cout << word << " is a palindrome." << std::endl;
    } else {
        std::cout << word << " is not a palindrome." << std::endl;
    }

    return 0;
}
