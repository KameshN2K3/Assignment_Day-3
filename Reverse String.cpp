#include <iostream>
#include <string>

std::string reverseString(const std::string& inputString) {
    std::string reversedString = inputString;
    int length = inputString.length();
    
    for (int i = 0; i < length / 2; ++i) {
        char temp = reversedString[i];
        reversedString[i] = reversedString[length - i - 1];
        reversedString[length - i - 1] = temp;
    }
    
    return reversedString;
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);
    std::string reversedString = reverseString(inputString);
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}
