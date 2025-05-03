#include <iostream>     // For input/output stream
#include <string>       // For the string class

using namespace std;

int main(void) {
    string name;                            // String to hold full name

    cout << "Hello Modern C++" << endl;     // Print greeting

    cout << "Enter your full name: ";       // Prompt for full name
    getline(cin, name);                     // Read the entire line including spaces

    cout << "My name is: " << name << endl; // Print the full name

    return 0;                               // Successful program exit
}
