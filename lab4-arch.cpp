#include <iostream>
#include <cstdlib> // For the system function

int main() {
    // Paths to the folders to be deleted
    const char* folderPath1 = "D:\\Konovalov\\lab3-konovalov\\PT-23-1\\Konovalov Ivan Denisovich\\batch\\Non-hidden-folder";
    const char* folderPath2 = "D:\\Konovalov\\lab3-konovalov\\PT-23-1\\Konovalov Ivan Denisovich\\batch\\Hidden-folder";

    // Deleting the first folder
    if (std::system(("rmdir /s /q \"" + std::string(folderPath1) + "\"").c_str()) != 0) {
        std::cerr << "Error deleting folder: " << folderPath1 << std::endl;
        return 1;
    }
    else {
        std::cout << "Folder successfully deleted: " << folderPath1 << std::endl;
    }

    // Deleting the second folder
    if (std::system(("rmdir /s /q \"" + std::string(folderPath2) + "\"").c_str()) != 0) {
        std::cerr << "Error deleting folder: " << folderPath2 << std::endl;
        return 1;
    }
    else {
        std::cout << "Folder successfully deleted: " << folderPath2 << std::endl;
    }

    return 0;
}
