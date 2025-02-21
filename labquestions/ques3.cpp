/*Write a program that: 
a. Accepts a string from the user. 
b. Checks whether the string is a palindrome (ignoring spaces and case sensitivity). 
c. Counts and displays the frequency of each character in the string (case 
insensitive). 
d. Replace all vowels in the string with a specific character (e.g., *). */

#include <iostream>
#include <algorithm>
#include <cctype>
#include <map>
using namespace std;


bool isPalindrome(string str) {
string cleaned = "";
    for (char c : str) {
if (isalnum(c)) {
    cleaned += tolower(c);
 }
    }
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());
    return cleaned == reversed;
}


void countFrequency(string str) {
    map<char, int> freq;
    for (char c : str) {
if (isalnum(c)) {
    freq[tolower(c)]++;
}
    }
    cout << "Character frequencies:" << endl;
    for (auto pair : freq) {
   cout << pair.first << ": " << pair.second << endl;
    }
}


void replaceVowels(string &str) {
    string vowels = "aeiouAEIOU";
    for (char &c : str) {
   if (vowels.find(c) != string::npos) {
 c = '*';
  }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
   cout << "The string is a palindrome." << endl;
    } else {
  cout << "The string is not a palindrome." << endl;
    }
    
    countFrequency(input);
    

    replaceVowels(input);
    cout << "String after replacing vowels: " << input << endl;
    
    return 0;
}

