#include <iostream>
using namespace std;
int main() {
    //PROBLEM 1a

    //   int n=1,sum;
    //   for (n; n<=100; n++){
    //       sum= sum+n;
    //     }
    // cout << sum << endl;

    // PROBLEM 1b

    //     int i=1,n,sum=0;
    //     cout << "Enter a number: ";
    //     cin >> n;
    //     while (i <= n) {
    //         sum += i;
    //         i++;
    //     }
    // cout << sum << endl;

    // PROBLEM 2a

    // int num;
    // bool isPrime(int num) {
    //     if (num < 2) return false;
    //     for (int i = 2; i * i <= num; i++) {
    //         if (num % i == 0) return false;
    //     }
    //     return true;
    // }
    //
    // int main() {
    //     int count = 0, num = 2;
    //     while (count < 10) {
    //         if (isPrime(num)) {
    //             cout << num << " ";
    //             count++;
    //         }
    //         num++;
    //     }
    //     cout << endl;
    // }

    // PROBLEM 2b

// int num;
//     bool isPrime(int num) {
//         if (num < 2) return false;
//         for (int i = 2; i * i <= num; i++) {
//             if (num % i == 0) return false;
//         }
//         return true;
//     }
//         int n, count = 0, num = 2;
//         cout << "Enter the number of prime numbers to display: ";
//         cin >> n;
//         while (count < n) {
//             if (isPrime(num)) {
//                 cout << num << " ";
//                 count++;
//             }
//             num++;
//         }
//         cout << endl;
//         return 0;
    }

//PROBLEM 3
    //
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    //
    // while (n != 1) {
    //     cout << n << " ";
    //     if (n % 2 == 0)
    //         n /= 2;
    //     else
    //         n = 3 * n + 1;
    // }
    // cout << "1" << endl;
    // return 0;

    // PROBLEM 4

    // int n, num = 0;
    // cout << "Enter a positive integer: ";
    // cin >> n;
    // if (n <= 0) {
    //     cout << "Please enter a positive integer." << endl;
    // }
    // while (n > 0) {
    //     n /= 10;
    //     num+=1;
    // }
    // cout << "Number of digits: " << num << endl;

    // PROBLEM 5

    // int num;
    //  cout << "Enter a number: ";
    //  cin >> num;
    //  while (num>0) {
    //      cout << num %10 << " " ;
    //      num = num/10;
    //  } cout << endl;

    // PROBLEM 6
// int a, b;
// cout << "Enter two numbers: ";
// cin >> a >> b;
//
// while (b != 0) {
//     int temp = b;
//     b = a % b;
//     a = temp;
// }
//
// cout << "GCD: " << a << endl;

    // PROBLEM 7
    // int a,sum=0;
    // while (sum < 100) {
    //     cout << "Enter a number: ";
    //     cin >> a;
    //     sum = sum + a;
    //     cout << sum << endl;
    //     a = a/10;
    //
    // }

    //PROBLEM 8

    // cout << "Sum exceeded 100! Total sum: 100" << endl;
    // cout << "Total numbers entered " << a << endl;
    // PROBLEM 8
    // int accaunt=500, withdfraw;
    // while (accaunt>=0) {
    //     cout << "How much you want to withdfraw?";
    //     cin >> withdfraw;
    //     accaunt=accaunt-withdfraw;
    //     cout << "Remaining balance: $" << accaunt << endl;
    //     if (accaunt < 0)
    //         cout << "You don't have enough money!" << endl;
    // }

    //PROBLEM 9

    // char choice;
    // do {
    //     cout << "Enter correct input: ";
    //     cin >> choice;
    //     switch (choice) {
    //         case 'Y':
    //             cout << "ACCEPTED" << endl;
    //         case 'N':
    //             cout << "ACCEPTED" << endl;
    //         break;
    //         default:
    //             cout << "INVALID" << endl;
    //     }
    // } while (choice != 'Y' && choice != 'N');

    //PROBLEM 10

//     char ch;
    //     do {
    //         cout << "Menu:\n";
    //         cout << "1. Sound\n";
    //         cout << "2. Settings\n";
    //         cout << "3. Exit\n";
    //
    //
    //         cin >> ch;
    //         switch (ch) {
    //             case '1':
    //                 cout << "Sound" << endl;
    //             break;
    //             case '2':
    //                 cout << "Settings" << endl;
    //             break;
    //             case '3':
    //                 cout << "Exit" << endl;
    //             break;
    //         }
    //     }
    //             while (ch==3);
    //
    //
    // }

    //PROBLEM 11

    // char ch;
    // int a,b;
    // do {
    //     cout << "Menu:\n";
    //     cout << "1. Addition\n";
    //     cout << "2. Subtraction\n";
    //     cout << "3. Multiplication\n";
    //     cout << "4. Division\n";
    //     cout << "5. Exit\n";
    //     cout << "Enter a number: ";
    //     cin >>a>>b;
    //     cout << "choose your option: ";
    //     cin >> ch;
    //     switch (ch) {
    //         case '1':
    //             cout << "a+b="<<a+b << endl;
    //         break;
    //         case '2':
    //             cout << "a-b="<< a-b << endl;
    //         break;
    //         case '3':
    //             cout << "a*b="<<a*b << endl;
    //         break;
    //         case '4':
    //             cout << "a/b="<< a/b << endl;
    //         break;
    //         case '5':
    //             cout << "EXIT"<< endl;
    //         break;
    //     }
    //
    // }
    // while (ch!=5);

    //PROBLEM 12

//     int a,c=0,d=1234;
//     do {
//         cout<<"Enter the password:\n";
//         cin>>a;
//         if (c<3) {
//             if (a==d) {
//                 cout<< "Welcome!";
//
//             }
//             else if (a!=d) {
//                 c++;
//                 cout<< "Try again"<<endl;
//                 cout << "attempts:"<<c<<endl;
//             }
//         }
//         else{
//             cout<<"You tried so much"<<endl;
//             break;
//
//         }
//     }
// while (a!=d);

    //PROBLEM 13

    // int a=123,d;
    //
    // while (a!=d) {
    //     cin >>d;
    //     if (a>d) {
    //         cout << "It is too low"<<endl;
    //     }
    //     else if (a<d) {
    //         cout << "It is too high"<<endl;
    //     }
    //     else if (a==d) {
    //         cout << "Congratulations"<<endl;
    //     }
    // }
    //