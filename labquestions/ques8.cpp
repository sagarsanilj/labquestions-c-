#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    int age;
    constexpr int DAYS_IN_YEAR = 365;

 
     cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Enter your age: ";
    cin >> age;

    int daysLived = age * DAYS_IN_YEAR;
  
    cout << "Hello, " << fullName << "! You have lived approximately " << daysLived << " days." << endl;
    
    return 0;
}
