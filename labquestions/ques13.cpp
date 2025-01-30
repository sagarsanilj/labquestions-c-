/*Create a program to simulate an ATM machine using a switch statement. Include options for withdrawal, deposit, balance inquiry, and exit,
 with error handling for invalid input and insufficient balance.*/
 #include <iostream>
using namespace std;

int main() {
    float balance = 1000.0; 
    int choice;
    float amount;

    cout << "Welcome to the ATM machine!" << endl;

    do {
        
   cout << "\nATM Menu: " << endl;
   cout << "1. Withdrawal" << endl;
   cout << "2. Deposit" << endl;
  cout << "3. Balance Inquiry" << endl;
  cout << "4. Exit" << endl;
 cout << "Please choose an option (1-4): ";
    cin >> choice;
        
 switch (choice) {
    case 1: 
   cout << "Enter amount to withdraw: ";
   cin >> amount;

               
   if (amount <= 0) {
 cout << "Invalid amount. Please enter a positive value." << endl;
   }
   else if (amount > balance) {
   cout << "Insufficient balance. Please try a smaller amount." << endl;
  }
else {
    balance -= amount;  
cout << "You have withdrawn: $" << amount << endl;
  cout << "Remaining balance: $" << balance << endl;
    }
   break;

case 2: 
   cout << "Enter amount to deposit: ";
   cin >> amount;
    if (amount <= 0) {
cout << "Invalid amount. Please enter a positive value." << endl;
 }
  else {
  balance += amount;  
  cout << "You have deposited: $" << amount << endl;
  cout << "Updated balance: $" << balance << endl;
   }
 break;

  case 3:    cout << "Your current balance is: $" << balance << endl;
   break;

 case 4: 
   cout << "Thank you for using the ATM. Goodbye!" << endl;
    break;

   default: 
   cout << "Invalid choice! Please select a valid option from the menu (1-4)." << endl;
   break;
   }

    } while (choice != 4); 

    return 0;
}
