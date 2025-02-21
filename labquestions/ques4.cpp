/*Print a spiral pattern of numbers for a given size n.  
Example for n = 4 (4x4 matrix):*/


#include <iostream>
using namespace std;

void generateSpiral(int n) {
    int matrix[n][n];
    int num = 1, top = 0, bottom = n - 1, left = 0, right = n - 1;
    
    while (num <= n * n) {
    
   for (int i = left; i <= right; i++)
 matrix[top][i] = num++;
 top++;
        

for (int i = top; i <= bottom; i++)
 matrix[i][right] = num++;
right--;
        
for (int i = right; i >= left; i--)
 matrix[bottom][i] = num++;
bottom--;
        

for (int i = bottom; i >= top; i--)
 matrix[i][left] = num++;
left++;
}
    
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cout << matrix[i][j] << " ";
}
cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the spiral (n): ";
    cin >> n;
    
    if (n <= 0) {
 cout << "Invalid size. Please enter a positive integer." << endl;
   return 1;
    }
    generateSpiral(n);
    
    return 0;
}