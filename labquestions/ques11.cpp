//  Create a program to count the number of 1 bits in an integer input by the user.#include <iostream>
#include <iostream>

using namespace std;

int main() {
    int num;
    int count = 0;
    
    cout << "Enter an integer: ";
    cin >> num;
    

    while (num) {
        count += num & 1;
        num >>= 1;
    }

    cout << "Number of 1 bits: " << count << endl;
    
    return 0;
}
