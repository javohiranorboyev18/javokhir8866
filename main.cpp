#include <iostream>
using namespace std;


 //Problem1

 // int cost_of_pizza(int quantity_pizza) {
 //     return quantity_pizza*10;
 // }
 // int cost_of_burger(int quantity_burger) {
 //     return quantity_burger*10;
 // }
 // int cost_of_salad(int quantity_salad) {
 //     return quantity_salad*5;
 // }
 // int main() {
 //     int total_bill=0,choice;
 //     do {
 //         cout<<"Menu:"<<endl;
 //         cout<<"1.Pizza:10"<<endl;
 //         cout<<"2.Burger:8"<<endl;
 //         cout<<"3.Salad:5$"<<endl;
 //         cout<<"4.Exit"<<endl;
 //         cout<<"Please enter your choice:";
 //         cin>>choice;
 //
 //         switch (choice) {
 //             case 1:
 //                 int quantity_pizza;
 //                 cout<<"Item:Pizza;"<<endl;
 //             cout<<"Quantity:";
 //             cin>>quantity_pizza;
 //             total_bill+=cost_of_pizza(quantity_pizza);
 //             break;
 //             case 2:
 //                 int quantity_burger;
 //             cout<<"Item:Burger;"<<endl;
 //             cout<<"Quantity:";
 //             cin>>quantity_burger;
 //             total_bill+=cost_of_burger(quantity_burger);
 //             break;
 //             case 3:
 //                 int quantity_salad;
 //             cout<<"Item:Salad;"<<endl;
 //             cout<<"Quantity:";
 //             cin>>quantity_salad;
 //             total_bill+=cost_of_salad(quantity_salad);
 //             break;
 //
 //             case 4:
 //                 cout<<"Thanks for your order"<<endl;
 //         }
 //     } while (choice!=4);
 //     cout<<"Your total bill:"<<total_bill;
 // }

 // //Problem2
 // int parkingfee35(int hour) {
 //     return 2*hour;
 // }
 // int parkingfee6(int hour) {
 //     return 5*hour;
 // }
 // int main() {
 //     int hour,parking_fee=0;
 //     while (hour>2) {
 //         cout<<"Please enter the hour:";
 //         cin>>hour;
 //         if (hour>=3 && hour<=5) {
 //             parkingfee35(hour);
 //             cout<<"Parking fee is:"<<parkingfee35(hour)<<endl;
 //             break;
 //
 //
 //         }
 //         else if (hour>6) {
 //             parkingfee6(hour);
 //             cout<<"Your parking fee is :"<<parkingfee6(hour);
 //             break;
 //         }
 //         else
 //             cout<<"It is free for two hours";
 //         break;
 //     }
 //
 //
 // }
 //
 // //Problem3
 // #include <iostream>
 // using namespace std;
 //
 // // Function prototypes
 // void deposit(double &balance);
 // void withdraw(double &balance);
 // void checkBalance(double balance);
 //
 // int main() {
 //     double balance = 500.0;  // Initial balance
 //     int choice;
 //
 //     do {
 //         // Display the menu
 //         cout << "\n-------- BANKING SYSTEM MENU --------" << endl;
 //         cout << "1. Deposit" << endl;
 //         cout << "2. Withdraw" << endl;
 //         cout << "3. Check Balance" << endl;
 //         cout << "4. Exit" << endl;
 //         cout << "Enter your choice: ";
 //         cin >> choice;
 //
 //         switch (choice) {
 //             case 1:
 //                 deposit(balance);
 //                 break;
 //             case 2:
 //                 withdraw(balance);
 //                 break;
 //             case 3:
 //                 checkBalance(balance);
 //                 break;
 //             case 4:
 //                 cout << "Exiting the program..." << endl;
 //                 break;
 //             default:
 //                 cout << "Invalid choice. Please try again." << endl;
 //         }
 //
 //     } while (choice != 4); // Continue until user chooses to exit
 //
 //     return 0;
 // }
 //
 // // Function to handle deposits
 // void deposit(double &balance) {
 //     double amount;
 //     cout << "Enter amount to deposit: ";
 //     cin >> amount;
 //
 //     if (amount > 0) {
 //         balance += amount;
 //         cout << "Deposited $" << amount << " successfully." << endl;
 //     } else {
 //         cout << "Invalid deposit amount." << endl;
 //     }
 // }
 //
 // // Function to handle withdrawals
 // void withdraw(double &balance) {
 //     double amount;
 //     cout << "Enter amount to withdraw: ";
 //     cin >> amount;
 //
 //     if (amount <= 0) {
 //         cout << "Invalid withdrawal amount." << endl;
 //     }
 //     else if (amount > balance) {
 //         cout << "Insufficient funds. You only have $"
 //              << balance << " in your account." << endl;
 //     }
 //     else {
 //         balance -= amount;
 //         cout << "Withdrew $" << amount << " successfully." << endl;
 //     }
 // }
 //
 // // Function to check the current balance
 // void checkBalance(double balance) {
 //     cout << "Your current balance is: $" << balance << endl;
 // }


 //Problem4

 // #include <iostream>
 // using namespace std;
 // void menu() {
 //     cout<<"Menu:"<<endl;
 //     cout<<"1.Movie A:$8"<<endl;
 //     cout<<"2.Movie B:$10"<<endl;
 //     cout<<"3.Movie C:$12"<<endl;
 //     cout<<"4.Exit"<<endl;
 //     cout<<"Please enter your choice:"<<endl;
 // }
 // int movieA(int quantity_A) {
 //     return quantity_A*8;
 // }
 // int movieB(int quantity_B) {
 //     return quantity_B*10;
 // }
 // int movieC(int quantity_C) {
 //     return quantity_C*12;
 // }
 //
 // int main() {
 //     int total_cost=0,choice;
 //     do {
 //         menu();
 //         cin>>choice;
 //         switch (choice) {
 //             case 1:
 //                 int quantity_A;
 //             cout<<"Quantity:"<<endl;
 //             cin>>quantity_A;
 //             total_cost += movieA(quantity_A);
 //             break;
 //             case 2:
 //                 int quantity_B;
 //             cout<<"Quantity:"<<endl;
 //             cin>>quantity_B;
 //             total_cost += movieB(quantity_B);
 //             break;
 //             case 3:
 //                 int quantity_C;
 //             cout<<"Quantity:"<<endl;
 //             cin>>quantity_C;
 //             total_cost += movieC(quantity_C);
 //             break;
 //             case 4:
 //                 cout<<"Goodbye"<<endl;
 //             break;
 //
 //         }
 //
 //     }
 //     while (choice!=4);
 //     cout<<"Total cost is:"<<total_cost;
 // }
 //
 //
 //
 // //Problem5
 // #include <iostream>
 // using namespace std;
 // void menu() {
 //         cout<<"Menu:"<<endl;
 //         cout<<"1.Train X:$15"<<endl;
 //         cout<<"2.Train Y:$20"<<endl;
 //         cout<<"3.Train Z:$25"<<endl;
 //         cout<<"4.Exit"<<endl;
 //         cout<<"Please enter your choice:"<<endl;
 //     }
 // int TrainX(int quantity_X) {
 //     return quantity_X*15;
 // }
 // int TrainY(int quantity_Y) {
 //     return quantity_Y*20;
 // }
 // int TrainZ(int quantity_Z) {
 //     return quantity_Z*25;
 // }
 // int main() {
 //     int choice,total_cost=0;
 //     do {
 //         menu();
 //         cin>>choice;
 //         switch(choice) {
 //             case 1:
 //                 int quantity_X;
 //                 cout<<"Quantity X:"<<endl;
 //             cin>>quantity_X;
 //             total_cost+=TrainX(quantity_X);
 //             break;
 //             case 2:
 //                 int quantity_Y;
 //             cout<<"Quantity Y:"<<endl;
 //             cin>>quantity_Y;
 //             total_cost+=TrainY(quantity_Y);
 //             break;
 //             case 3:
 //                 int quantity_Z;
 //             cout<<"Quantity Z:"<<endl;
 //             cin>>quantity_Z;
 //             total_cost+=TrainZ(quantity_Z);
 //             break;
 //             case 4:
 //                 cout<<"You entered EXIT"<<endl;
 //             break;
 //         }
 //     } while (choice != 4);
 //     cout<<"Total Cost:"<<total_cost;
 // }


 //Problem6
 //
 // #include <iostream>
 // #include <cctype>
 // #include <string>
 //
 // using namespace std;
 //
 // int main() {
 //     string password;
 //     bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
 //     string specialCharacters = "!@#$%^&*()_-+=<>?/{}[]|";
 //
 //     cout << "Enter a password: ";
 //     cin >> password;
 //
 //     if (password.length() < 8) {
 //         cout << "Weak Password (Too short, must be at least 8 characters)" << endl;
 //         return 0;
 //     }
 //
 //     for (char ch : password) {
 //         if (isupper(ch)) hasUpper = true;
 //         if (islower(ch)) hasLower = true;
 //         if (isdigit(ch)) hasDigit = true;
 //         if (specialCharacters.find(ch) != string::npos) hasSpecial = true;
 //     }
 //     if (hasUpper && hasLower && hasDigit && hasSpecial) {
 //         cout << "Strong Password" << endl;
 //     } else {
 //         cout << "Weak Password (Missing: ";
 //         if (!hasUpper) cout << "Uppercase, ";
 //         if (!hasLower) cout << "Lowercase, ";
 //         if (!hasDigit) cout << "Digit, ";
 //         if (!hasSpecial) cout << "Special character, ";
 //         cout << "\b\b)" << endl;  // Remove last comma and space
 //     }
 //
 //     return 0;
 //}

//Problem7

#include <iostream>
//
// using namespace std;
//
// // Function to check if a year is a leap year
// bool isLeapYear(int year) {
//     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
// }
//
// // Function to validate the date
// bool isValidDate(int day, int month, int year) {
//     if (month < 1 || month > 12) return false; // Month must be between 1-12
//
//     int daysInMonth;
//     switch (month) {
//         case 4: case 6: case 9: case 11: daysInMonth = 30; break;
//         case 2: daysInMonth = isLeapYear(year) ? 29 : 28; break;
//         default: daysInMonth = 31;
//     }
//
//     return (day >= 1 && day <= daysInMonth);
// }
//
// // Function to calculate the next date
// void getNextDate(int &day, int &month, int &year) {
//     int daysInMonth;
//     switch (month) {
//         case 4: case 6: case 9: case 11: daysInMonth = 30; break;
//         case 2: daysInMonth = isLeapYear(year) ? 29 : 28; break;
//         default: daysInMonth = 31;
//     }
//
//     if (day < daysInMonth) {
//         day++; // Move to the next day
//     } else {
//         day = 1; // Reset day and increment month
//         if (month == 12) {
//             month = 1;
//             year++; // Move to next year
//         } else {
//             month++;
//         }
//     }
// }

// int main() {
//     int day, month, year;
//     char choice;
//
//     do {
//         cout << "Enter a date (day month year): ";
//         cin >> day >> month >> year;
//
//         if (!isValidDate(day, month, year)) {
//             cout << "Invalid date! Please enter a correct date.\n";
//         } else {
//             getNextDate(day, month, year);
//             cout << "Next Date: " << day << "/" << month << "/" << year << endl;
//         }
//
//         cout << "Do you want to enter another date? (y/n): ";
//         cin >> choice;
//     } while (choice == 'y' || choice == 'Y');
//
//     return 0;
// }