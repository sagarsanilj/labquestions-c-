/*2. Array Operations 
Write a program that performs the following operations on an array: 
a. Accept an integer array from the user (size determined at runtime). 
b. Reverse the array and display it. 
c. Find and display the second largest and second smallest elements in the array.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void reverseArray(vector<int>& arr) {
reverse(arr.begin(), arr.end());
}


void findSecondLargestAndSmallest(vector<int>& arr) {
   if (arr.size() < 2) {
cout << "Array must have at least two elements." << endl;
return;
    }
    
    sort(arr.begin(), arr.end());
    
    int smallest = arr[0], secondSmallest = -1;
    int largest = arr[arr.size() - 1], secondLargest = -1;
    

    for (int i = 1; i < arr.size(); i++) {
   if (arr[i] != smallest) {
secondSmallest = arr[i];
   break;
   }
    }
    
    
    for (int i = arr.size() - 2; i >= 0; i--) {
    if (arr[i] != largest) {
    secondLargest = arr[i];
    break;
    }
    }
    
    cout << "Second smallest element: " << secondSmallest << endl;
    cout << "Second largest element: " << secondLargest << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    if (n <= 0) {
       cout << "Invalid array size." << endl;
   return 1;
    }
    
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
     cin >> arr[i];
    }
    
 
    reverseArray(arr);
    cout << "Reversed array: ";
    for (int num : arr) {
    cout << num << " ";
    }
    cout << endl;
    
    findSecondLargestAndSmallest(arr);
    
    return 0;
}
