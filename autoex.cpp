#include <iostream>     // Includes input/output stream library

using namespace std;    // Allows using standard names (like cout, cin) without std::

int main(void) {
    auto x = 9;          // 'x' is automatically deduced as int because 9 is an integer literal

    const int y = 10;    // 'y' is a constant integer, its value cannot be changed

    auto const z = y;    // 'z' is deduced as const int (inherits const from 'y')
                         // Equivalent to: const int z = y;

    return 0;            // Return success
}
