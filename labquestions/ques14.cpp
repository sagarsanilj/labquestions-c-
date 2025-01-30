/* Develop a program that checks if a triangle is valid based on the lengths of its sides and determines its type 
(equilateral, isosceles, or scalene) using nested if-else statements.*/
#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    
 
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {

    if (a == b && b == c) {
    cout << "The triangle is Equilateral." << endl; }

    else if (a == b || b == c || a == c) {
   cout << "The triangle is Isosceles." << endl;
   }
    else {
    cout << "The triangle is Scalene." << endl;
    }
    }
    else {
cout << "The triangle is not valid." << endl;
    }

    return 0;
}
