/*Write a program that calculates the compound interest for a given principal amount, 
rate of Interest, and time period using constants and user input for variables.*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float rate = 5.0; 
    float principal, time, amount, compoundInterest;
    
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the time period (in years): ";
    cin >> time;
    
    float rateDecimal = rate / 100;
    
   
    amount = principal * pow((1 + rateDecimal), time);
    compoundInterest = amount - principal;
    
    
    cout << "Compound Interest: " << compoundInterest << endl;
    cout << "Total Amount after " << time << " years: " << amount << endl;
    
    return 0;
}
