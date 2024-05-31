#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    // it is for input
    // cout << "Value of your input is: " << n << endl ;
    if (a>0) {
        cout << "a is positive" << endl;

    }
    else{
        cout << "a is negative" << endl;
    }
    int a , b ;
    cout << "the value a" << endl;
       cin >> a ;
       cout << "the value b" << endl;
       cin >> b ;

     if (a>b) {
        cout << "a is bigger" << endl;
     }
     if (b>a) {
        cout << "b is bigger" << endl;
     }

    int a;
    cout << "Write a number: " << endl;
    cin >> a;

    if (a > 0) {
        cout << "Positive" << endl;
    }
    else if (a < 0) {
        cout << "Negative" << endl;
    }
    else {
        cout << "It's 0" << endl;
    }
    
}

