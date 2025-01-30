// 1. Create a program that reads a user's name and age, then outputs: "Hello [name], you are [age] years old!"

#include<iostream>
using namespace std;
int main()
{
    int age ;
    string name;

    cout<< "what is your name ? ";
    cin>>name;
    cout<< "what is your age? ";
    cin>>age;

    cout<< " hello " << name << " you are " <<  age << " years old ! " ;

   return 0; 
}