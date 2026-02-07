#include <iostream>
using namespace std;

int main(){
    cout << "baasics of cpp\n";
    /*
    things we gonna cover in this code is basic operations (binary and unary) and type casting
    lets get started
    */
   int a, b;
   cout << "enter num a: ";
   cin >> a;
   cout << "enter b: ";
   cin >> b;
   cout << "sum " << a+b << endl;
   cout << "diff " << a-b << endl;
   cout << "product " << b*b << endl;
   cout << "division with type casting to get float answer " << a/ (float)b << endl;
   cout << "modulus " << a%b << endl;
    // now lets do unary operations
    cout << a++ << ' ' << ++a; // post increament and pre increament 
    cout <<endl << b-- << ' ' <<--b << endl; // post decreament and pre decrement
    // assignment operators 
    a = b;      // a becomes b
    a += b;     // a = a + b
    a -= b;     // a = a - b
    a *= b;     // a = a * b
    a /= b;     // a = a / b
    a %= b;     // a = a % b 
    // logical operators
    cout <<boolalpha;  // prints true/false instead of 1/0

    cout << ((a > b) && (b > 0)) << endl;  // true
    cout << ((a < b) || (b > 0)) << endl;  // true
    cout << (!(a == b)) << endl;           // true
    // comparision operatos
    cout << endl << (a > b) << " " << (a == b) << " " << (a <= b);
    cout << noboolalpha;
    return 0;
}