#include <iostream>
// To work with files in C++ you have to add the following on line 7
// In this library (fstream) it has 3 classes
// ofstream --- Creates and writes to files
// ifstream ---	Reads from files
// fstream --- 	A combination of ofstream and ifstream: creates, reads, and writes to files
#include <fstream>

int main() {

    // Creates and opens a text file called "a-new-file.txt" with Myfile being the class name caller!
    std::ofstream MyFile("a-new-file.txt");

    // This writes to the file!
    MyFile << "Hello World! This is pretty fucking cool!";

    // We close it the file because of good practice (helps with memory space)!
    MyFile.close();

    std::string myNewString;
    // Plan on reading from the file "a-new-file"!
    std::ifstream AnotherFile("a-new-file.txt");
    // Use a while loop together with the getline() function to read the file line by line, it then stores the line in "myNewString".
    while (getline(AnotherFile, myNewString)) {
        // The text from the file then gets printed to the console.
        std::cout << myNewString;
    }
    
    AnotherFile.close();

    return 0;
}