//  Take two floating-point numbers as input and display their division result with two decimal places.
#include<iostream>
using namespace std;
int main()
{
    float a , b ,division ;
    cout<<" enter the value of a ";
    cin>>a;
    cout<<" enter the value of b ";
    cin>>b;
   division = a/b;
   if(b!=0){
 
 cout<< "result of a/b is " << division<<endl ;
}
else{
    cout << "Error: Division by zero is not allowed." << endl;
}
   return 0; 
}