#include <iostream>
#include <fstream>
#include <string>

void interpretDone(const std::string &filePath) {
    std::ifstream file(filePath);
    std::string line;
    int doneCounter = 0;

    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filePath << "\n";
        return;
    }

    while (std::getline(file, line)) {
        // Count occurrences of "DONE" on each line
        int count = 0;
        for (size_t pos = line.find("DONE"); pos != std::string::npos; pos = line.find("DONE", pos + 4)) {
            count++;
        }

        // Interpret "DONE" counts
        if (count == 1) {
            std::cout << "Done.\n";  // Print "Done."
        } else if (count == 2) {
            doneCounter++;  // Increment counter
        } else if (count == 4) {
            std::cout << "Hello, DoneLang!\n";  // Special command for "Hello, World!"
        }
    }

    std::cout << "Total DONEs counted: " << doneCounter << "\n";
    file.close();
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <file.done>\n";
        return 1;
    }

    interpretDone(argv[1]);
    std::cout << "Execution finished. DONE.\n";
    return 0;
}
