/*1. Number Manipulation and Prime Numbers 
Write a C++ program to take a positive integer n as input and: 
1. Check whether n is a prime number. 
2. If it is not prime, find all its factors. 
3. If it is prime, find the next prime number greater than n. */

#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) return false;
    }
    return true;
}


int nextPrime(int num) {
    while (true) {
    num++;
    if (isPrime(num)) return num;
    }
}


void findFactors(int num) {    cout << "Factors of " << num << ": ";
    for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
    cout << i << " ";
    }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isPrime(n)) {
    cout << n << " is a prime number." << endl;
    cout << "The next prime number is " << nextPrime(n) << "." << endl;
    } else {
    cout << n << " is not a prime number." << endl;
    findFactors(n);
    }
    return 0;
}
