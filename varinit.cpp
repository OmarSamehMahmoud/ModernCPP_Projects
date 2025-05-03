#include <iostream> 	// Includes input/output functionality

using namespace std;

int main(void) {

    int x{9};            // Uniform initialization (preferred in modern C++ for safety)
    int y(9);            // Direct initialization
    int z = 10;          // Copy initialization

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    return 0;
}
