#include <iostream>
#include <cstdlib> // For the system function

using namespace std;

int main() {
    // Paths to the folders to be deleted
    const char* folderPath1 = "D:\\Konovalov\\lab3-konovalov\\PT-23-1\\Konovalov Ivan Denisovich\\batch\\Non-hidden-folder";
    const char* folderPath2 = "D:\\Konovalov\\lab3-konovalov\\PT-23-1\\Konovalov Ivan Denisovich\\batch\\Hidden-folder";

    // Deleting the first folder
    string command1 = "rmdir /s /q \"" + string(folderPath1) + "\"";
    if (system(command1.c_str()) != 0) {
        cerr << "Error deleting folder: " << folderPath1 << endl;
        return 1;
    } else {
        cout << "Folder successfully deleted: " << folderPath1 << endl;
    }

    // Deleting the second folder
    string command2 = "rmdir /s /q \"" + string(folderPath2) + "\"";
    if (system(command2.c_str()) != 0) {
        cerr << "Error deleting folder: " << folderPath2 << endl;
        return 1;
    } else {
        cout << "Folder successfully deleted: " << folderPath2 << endl;
    }

    return 0;
}
