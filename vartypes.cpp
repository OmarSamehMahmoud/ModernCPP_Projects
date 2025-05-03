#include <iostream>   // Includes the input/output stream library
#include <string>     // Includes the string library (not used here, but good practice)

using namespace std;  // Allows usage of standard namespace objects like cout, cin without prefixing with std::

int main(void) {
    int x = 9;                      // Integer variable
    float y = 3.6f;                 // Floating point variable (note the 'f' to indicate float literal)
    bool a = 0;                     // Boolean variable (0 = false)
    char u = 'p';                   // Character variable (single ASCII character)
    wchar_t s = L'ع';               // Wide character variable (L is used for wide char literals like Arabic letters)
    short t = 9;                    // Short integer variable
    long double r = 6.645454545L;   // Long double variable (L indicates a long double literal)

    // Output each variable
    cout << "Int Ex: " << x << endl;            // Outputs integer value
    cout << "Float Ex: " << y << endl;          // Outputs float value
    cout << "Bool Ex: " << a << endl;           // Outputs boolean value (0 or 1)
    cout << "Char Ex: " << u << endl;           // Outputs character
    wcout << L"Wchar_t Ex: " << s << endl;      // Outputs wide character (use wcout for wchar_t)
    cout << "Short Ex: " << t << endl;          // Outputs short integer value
    cout << "Long Double: " << r << endl;       // Outputs long double value

    return 0; // Return 0 to indicate successful execution
}
