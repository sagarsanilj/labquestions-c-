/* Rotate Matrix 90 Degrees 
Rotate a square matrix 90 degrees clockwise.*/
#include <iostream>
using namespace std;

#define N 100 

void rotateMatrix(int arr[][N], int n) {
  
    for (int i = 0; i < n; i++) {
for (int j = i; j < n; j++) {
swap(arr[i][j], arr[j][i]);
}
    }


    for (int i = 0; i < n; i++) {
for (int j = 0, k = n - 1; j < k; j++, k--) {
swap(arr[i][j], arr[i][k]);
 }
    }
}


void printMatrix(int arr[][N], int n) {
    for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cout << arr[i][j] << " ";
}
cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter matrix size (n x n): ";
    cin >> n;

    int arr[N][N];

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
  cin >> arr[i][j];
}
    }


    rotateMatrix(arr, n);

    cout << "Matrix after 90-degree rotation:\n";
    printMatrix(arr, n);

    return 0;
}
