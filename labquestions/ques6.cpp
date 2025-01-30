/*Write a program that calculates the area and perimeter of a rectangle using user-provided length and width. 
Use constants where necessary.*/ 
#include<iostream>
using namespace std;
int main() {
    const int FACTOR = 2; 
    int length, width, area, perimeter;
    
   
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    

    area = length * width;
    perimeter = FACTOR * (length + width);
    

    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;
    
    return 0;
}