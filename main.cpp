#include <iostream>
using namespace std;

// PROBLEM 1

// int multiply(int a, int b) {
//     if (b==0) {
//         return 0;
//     }
//     if (b<0) {
//         return -multiply(a, -b);
//     }
//     return a + multiply (a, b-1);
// }
// int main() {
// cout << "Enter two numbers: \n";
//     int number1, number2;
//     cin >> number1 >> number2;
//     cout << multiply(number1, number2) << endl;
//     }

// PROBLEM 2

// int factorial (int n) {
//     if (n==0 || n==1) {
//         return 1;
//     }
//     return n * factorial(n-1);
// }
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     cout << "Factorial of the given number is: " << factorial(number);
// }

// PROBLEM 3

// int fibonacci(int n) {
//     if (n == 0 ) {
//         return 0;
//     }
//     if (n == 1) {
//         return 1;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }
// int main(){
//     int num;;
// cin >> num;
// cout << fibonacci(num);
// }

// PROBLEM 4

// int sum(int a) {
//     if (a==0) {
//         return 0;
//     }
//     return a + sum(a-1);
// }
// int main() {
//     int a;
//     cin>>a;
//     cout<<sum(a);
// }

// PROBLEM 5

// int number(int a) {
//     if (a==1) {
//         return 1;
//     }
//     cout << a << " " ;
//     return number (a-1);
// }
// int main() {
//     int a;
//     cout << "Please enter a number:" << endl;
//     cin >> a;
//     cout << number(a) << endl;
// }

//PROBLEM 6

// int number(int a) {
// if (a == 0) return 0;
//
//     return 1+number(a/10);
// }
//
// int main() {
//     int a;
//     cin>>a;
//     cout<<number(a);
// }

//PROBLEM 7

// int sum(int num) {
//     if (num%10==0) {
//         return 0;
//     }
//     return num%10+sum(num/10);
// }
// int main() {
//     int num;
//     cin>>num;
//     cout<<sum(num)<<endl;
//
// }

//PROBLEM 8

// int multiplication(int a, int b) {
//     if (b == 0) {
//         return 1;
//     }
//     return a*multiplication(a, b-1);
// }
// int main() {
//     int q, w;
//     cin >> q >> w;
//     cout << multiplication(q, w) << endl;
// }

//PROBLEM 9

// int reverse(int num, int rev = 0) {
//     if (num == 0) return rev;
//     return reverse(num / 10, rev * 10 + num % 10);
// }
// int main() {
//     int number1;
//     cin >> number1;
//     cout << reverse(number1) << endl;
// }

//PROBLEM 10

// int palindrome(int num, int rev, int original) {
//     if (num == 0) return rev == original;
//
//     rev = rev * 10 + (num % 10);
//     return palindrome(num / 10, rev, original);
// }
// int palindrome(int num) {
//     if (num < 0) return false;
//     return palindrome(num, 0, num);
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (palindrome(num))
//         cout << "True" << endl;
//     else
//         cout << "False" << endl;
//     return 0;
// }

//PROBLEM 11

// int Prime(int n, int d) {
//     if (n <= 1) return false;
//     if (d * d > n) return true;
//     if (n % d == 0) return false;
//     return Prime(n, d + 1);
// }
// int isPrime(int n) {
//     return Prime(n, 2);
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//
//     if (isPrime(num))
//         cout << "true\n";
//     else
//         cout << " false\n";
//     return 0;
// }









