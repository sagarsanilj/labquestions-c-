Q15.cpp
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c,d;
cout<<"enter numbers:";
cin>>a>>b>>c>>d;
cout<<(a^b+c&d);
return 0;
}
Q16.cpp
#include <iostream>
using namespace std;
bool opposite(int a,int b){
    return a^b<0;
   
}

int main() {
    int a,b;
    cin>>a>>b;
    if (opposite(a,b))
    cout<<"yes";
    else
    cout<<"no";
   
    return 0;
}

Q17.cpp
#include <iostream>
using namespace std;

int main() {
    float a,b,r,q;
    r=0.0;
    q=0.0;
    cout<<"enter a& b:";
    cin>>a>>b;
    if(a==0.0)
    cout<<"answer = 0";
    else if(b==0.0)
    cout<<"not defined";
    else
    {while(a>=b){
        a-=b;
        q++;
    }
    cout<<q;
    }
   
   

    return 0;
}
Q18.cpp
#include<iostream>
using namespace std;

int circularLeftShift(int num, int positions) {
    int bitCount = sizeof(num) * 8;
    return (num << positions) | (num >> (bitCount - positions));
}

int circularRightShift(int num, int positions) {
    int bitCount = sizeof(num) * 8;
    return (num >> positions) | (num << (bitCount - positions));
}

int main() {
    int num, leftShiftPos, rightShiftPos;

    cout << "Enter an integer: ";
    cin >> num;
   
    cout << "Enter the number of positions to shift for left and right shifts: ";
    cin >> leftShiftPos >> rightShiftPos;

    int leftShifted = circularLeftShift(num, leftShiftPos);
    int rightShifted = circularRightShift(num, rightShiftPos);

    cout << "Original number: " << num << endl;
    cout << "After circular left shift by " << leftShiftPos << " positions: " << leftShifted << endl;
    cout << "After circular right shift by " << rightShiftPos << " positions: " << rightShifted << endl;

    return 0;
}

Q19.cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"enter grade out of 10:";
    cin>>a;
    switch(a){
        case 10:cout<<"A+";
        break;
        case 9:cout<<"A";
        break;
        case 8:cout<<"B+";
        break;
        case 7:cout<<"B";
        break;
        case 6:cout<<"C+";
        break;
        case 5:cout<<"C";
        break;
        default:cout<<"Enter correct Number";
       
   
    }

    return 0;
}
Q20.cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    float b,c;
    cout<<"enter numbers:";
    cin>>b>>c;
    cout<<"Menu:\n";
    cout<<"1. Addition\n";
    cout<<"2. Subtraction\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    cout<<"5. Exit\n";
    cout<<"Enter your choice: ";
   
    cin>>a;
    switch(a){
        case 1:cout<<b+c;
        break;
        case 2:cout<<b-c;
        break;
        case 3:cout<<b*c;
        break;
        case 4:cout<<b/c;
        break;
        case 5:exit(0);
        break;
        default:cout<<"Enter correct operation";
       
   
    }

    return 0;
}
Q21.cpp
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0)
                cout<<year<<" is a leap year."<<endl;
            else
                cout<<year<<" is not a leap year."<<endl;
        }else{
            cout<<year<<" is a leap year."<<endl;
        }
    }else{
        cout<<year<<" is not a leap year."<<endl;
    }
    return 0;
}
Q22.cpp
#include<iostream>
using namespace std;
int main(){
    int n, a = 0, b = 1, c;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for(int i = 1; i <= n; i++){
        if(i == 1) cout << a << " ";
        else if(i == 2) cout << b << " ";
        else {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    }
    cout << endl;
    return 0;
}

Q23.cpp
#include<iostream>
using namespace std;
int main(){
    int num, i = 2, flag = 0;
    cout << "Enter a number: ";
    cin >> num;
    if(num <= 1){
        cout << num << " is not a prime number." << endl;
    }else{
        while(i <= num / 2){
            if(num % i == 0){
                flag = 1;
                break;
            }
            i++;
        }
        if(flag == 0)
            cout << num << " is a prime number." << endl;
        else
            cout << num << " is not a prime number." << endl;
    }
    return 0;
}
Q24.cpp
#include <iostream>
using namespace std;
int fact(int a)
{int b=1,c=1;
do{b=b*c;
c++;

   
}while(c<=a);
return b;}

int main() {
    int a;
    cout<<"enter no :";
    cin>>a;
    cout<<fact(a);
   
   

    return 0;
}
Q25.cpp
#include <iostream>
#include <cstdarg>
#include <vector>

using namespace std;

void processNumbers(int count, ...) {
    va_list args;
    va_start(args, count);

    int sum = 0;
    int max_number = 0;
    int min_number = 0;

    if (count > 0) {
        max_number = va_arg(args, int);
        min_number = max_number;
        sum += max_number;
    }

    for (int i = 1; i < count; ++i) {
        int num = va_arg(args, int);
        sum += num;

        if (num > max_number) {
            max_number = num;
        }

        if (num < min_number) {
            min_number = num;
        }
    }

    va_end(args);

    cout << "\nResults:" << endl;
    cout << "Sum of all entered numbers: " << sum << endl;
    cout << "Count of valid integers entered: " << count << endl;
    cout << "Maximum number: " << max_number << endl;
    cout << "Minimum number: " << min_number << endl;
}

int main() {
    int number;
    string user_input;
    vector<int> numbers;

    while (true) {
        cout << "Enter an integer (or 'exit' to quit): ";
        cin >> user_input;

        if (user_input == "exit") {
            break;
        }

        try {
            number = stoi(user_input);
            numbers.push_back(number);
        } catch (invalid_argument& e) {
            cout << "Invalid input. Please enter a valid integer." << endl;
        } catch (out_of_range& e) {
            cout << "Number out of range. Please enter a valid integer." << endl;
        }
    }

    if (!numbers.empty()) {
        int count = numbers.size();
        processNumbers(count, numbers[0], numbers.data(), count);
    } else {
        cout << "No valid numbers were entered." << endl;
    }

    return 0;
}
Q26.cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of primes to generate: ";
    cin >> n;

    int count = 0;
    int num = 2;

    while (count < n) {
        bool prime = true;

        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            cout << num << " ";
            count++;
        }

        num++;
    }

    cout << endl;
    return 0;
}Q27.cpp
#include <iostream>
#include <math.h>

using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, n);
        originalNum /= 10;
    }

    return sum == num;
}

int main() {
    int start, end;

    cout << "Enter the starting range: ";
    cin >> start;
    cout << "Enter the ending range: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:" << endl;
   
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
Q28.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    int attempts = 10;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "You have " << attempts << " attempts to guess the number." << endl;

    for (int i = 0; i < attempts; i++) {
        cout << "Attempt " << i + 1 << ": Enter your guess: ";
        cin >> guess;

        if (guess == number) {
            cout << "Congrats! You guessed it!" << endl;
            return 0;
        } else if (guess < number) {
            cout << "Too low!" << endl;
        } else {
            cout << "Too high!" << endl;
        }
    }

    cout << "Sorry, out of attempts. The number was " << number << "." << endl;
    return 0;
}
Q29.cpp
#include <iostream>
using namespace std;

int main() {
    int i,a, n=50;
    for(i=51;i<100;i++){
        if(i%7==0)
        {a=i;
        break;}
       
    }
   
  cout<<a;

    return 0;
}
Q30.cpp
#include <iostream>
using namespace std;

int main() {
    int i,a=0, n=50;
    for(i=1;i<=500;i++){
        if(i%3!=0&&i%7!=0)
        {cout<<i<<endl;
        a+=i;}
        else if(a>=1000)
        {break;}
        else
        continue;
       
    }
   


    return 0;
}
Q31.cpp
#include <iostream>
using namespace std;

int main() {
    int a,e,i,o=0,u;
    cout<<"enter number to be reversed:";
    cin>>a;
    i=a;
    while(a>0)
    {e=a%10;
    o=o*10+e;
    a=a/10;
    if(i==a)
    {
    u=1;
    }
   
   
   
       
    }
    if(u!=1)
    cout<<o;
    else
    exit(0);
   


    return 0;
}
Q32.cpp
#include <iostream>

using namespace std;

int main() {
    int n;
   
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n < 2) {
        cout << "Array needs at least two elements to find the second largest element." << endl;
        return 0;
    }

    int firstLargest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    if (firstLargest == secondLargest) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}
Q33.cpp
#include <iostream>
#include <math.h>

using namespace std;

bool canBeRepresentedExactly(double number) {
    double integralPart, fractionalPart;
    fractionalPart = modf(number, &integralPart);

    while (fractionalPart != 0) {
        fractionalPart *= 2;
        if (fractionalPart >= 1) {
            fractionalPart -= 1;
        }
        if (fractionalPart == 0.5) {
            return true;
        }
    }
    return true;
}

int main() {
    double number;
    cout << "Enter a floating-point number: ";
    cin >> number;

    if (canBeRepresentedExactly(number)) {
        cout << "The number " << number << " can be represented exactly in binary format." << endl;
    } else {
        cout << "The number " << number << " cannot be represented exactly in binary format." << endl;
    }

    return 0;
}
Q34.cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int rows, cols;
   
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Formatted 2D Array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
Q35.cpp
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int gcdResult = gcd(num1, num2);
    int lcmResult = lcm(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdResult << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcmResult << endl;

    return 0;
}