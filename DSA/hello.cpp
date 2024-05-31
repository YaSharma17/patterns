#include <iostream>
using namespace std;
 
 int main() {
    int a = 2 ;
    cout<< a << endl;

    char b = 'x' ;
    cout<< b << endl;

    bool b1 = false ;
    cout<< b1 << endl;

    float f = 1.2 ;
    cout<< f << endl;

    double d = 1.23 ;
    cout << d << endl;
    int size = sizeof(b);
    cout << "Size of b is:" << size << endl;
    int a = 'a' ;
    cout << a << endl;
    // bcz the data type is int thatswhy op is 97 as a is mapped to 97 in assai table
    int a = 2/5 ;
    cout << a << endl;
    int a = 2 ; 
    int b = 3 ;
    bool first = (a == b);
    cout << first << endl;
    // if condition is true it shows 1 and if it is false it shows 0
    bool second = (a < b);
    cout << second << endl;

    bool third = (a > b);
    cout << third << endl;

    bool forth = (a <= b);
    cout << forth << endl;

    bool fifth = (a >= b);
    cout << fifth << endl;

    bool sixth = (a != b);
    cout << sixth << endl;

    

 }