#include <iostream>     // Includes standard input/output stream objects (cout, cin, etc.)
#include <string>       // Includes the string class for handling text input

using namespace std;    // Avoids writing std:: before every standard object

int main(void) {
    string name;                            // Declares a string variable to hold the user's name

    cout << "Hello Modern C++" << endl;     // Prints a greeting message followed by a new line

    cout << "Enter your name: ";            // Prompts the user to enter their name

    cin >> name;                            // Reads the name input (up to the first whitespace)

    cout << "My name is: " << name << endl; // Outputs the name entered by the user

    return 0;                               // Returns 0 to indicate successful execution
}
