#include <iostream>
#include <string>
#include <vector>

int main() {
    // Sample array of text phrases
    std::vector<std::string> textArray = {"Hello World", "C++ is for Poo Poo Heads", "Keyphrases example"};

    // Keyphrase to search for
    std::string keyphrase = "C++";

    // Iterate through the array
    for (const std::string& phrase : textArray) {
        // Check if the keyphrase is found in the current phrase
        if (phrase.find(keyphrase) != std::string::npos) {
            std::cout << "Keyphrase found in: " << phrase << std::endl;
        }
    }

    return 0;
}
