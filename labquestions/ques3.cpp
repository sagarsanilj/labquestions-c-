/* Ask the user to input two numbers and a mathematical operator (+, -, , /) and display the result of the operation. 
Eg 3 4 output 12 (Hint: use switch case)*/

#include<iostream>
using namespace std;
int main()
{
    int num1 , num2 ;
    char op;
    cout << "enter the value of num1 \n";
    cin >> num1;
    cout << "enter the value of num2 \n";
    cin >> num2;
    cout<< "enter the operator to apply  (+ , - , * , / , % ) : ";
    cin >> op ; 
     
      switch(op){
    case '+' :
       cout<<"RESULT a4" << num1 + num2  <<endl;
       break;
       case '-' :
       break;
       cout<<"RESULT " << num1 - num2  <<endl;
       break;
       case '*' :
       cout<<"RESULT " << num1 * num2  <<endl;
       break;
        case '/':
     if (num2 != 0) {
    cout << "Result  " << num1 / num2 << endl;
       } else {
      cout << "Error: Division by zero is not allowed." << endl;
      
       case '%' :
       cout << "RESULT "  << num1 % num2  <<endl;
      }
       break;

      
   default:
            cout << "Invalid operator!" << endl;
}
   return 0; 
}

