// Develop a program that takes two integers as input and determines if the first is a multiple of the second using relational and logical operators.
#include<iostream>
using namespace std;
int main()
{
    int num1 , num2;
     cout<<"enter num1 : " ;
 cin>>num1;
     cout<<"enter num2 : ";
 cin>>num2;


if (num2 != 0 && num1 % num2 == 0) {
        cout << num1 << " is a multiple of " << num2 <<  endl;
    } else {
        cout << num1 << " is not a multiple of " << num2 << endl;
    }
    

   return 0; 
}