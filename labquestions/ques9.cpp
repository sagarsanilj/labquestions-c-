// Create a program that takes three inputs: a character, an integer, and a floating-point number. Display them in a formatted table.
#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    char character;
    int integer;
    float floatingPoint;

    cout << "Enter a character: ";
    cin >> character;
    cout << "Enter an integer: ";
    cin >> integer;
    cout << "Enter a floating-point number: ";
    cin >> floatingPoint;
    
    cout << "\nFormatted Output:\n";
    cout << "!------------+------------+------------!" << endl;
    cout << "| Character  | Integer    | Float      |" << endl;
    cout << "+------------+------------+------------+" << endl;
    cout << "| " << setw(10) << character << " | " << setw(10) << integer << " | " << setw(10) << fixed << setprecision(2) << floatingPoint << " |" << endl;
    cout << "!------------+------------+------------!" << endl;
    
    return 0;
}
