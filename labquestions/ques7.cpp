// Write a program to swap two numbers using a temporary variable and then without using a temporary variable.
#include <iostream>

using namespace std;

int main() {
    int a, b, temp;
    
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
  
    temp = a;
    a = b;
    b = temp;
    
    cout << "After swapping : a = " << a << ", b = " << b << endl;
    

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "After swapping (without using temp variable): a = " << a << ", b = " << b << endl;
    
    return 0;
}
