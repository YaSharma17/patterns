#include<iostream>
using namespace std;

int main(){
    int i;
    cin>>i; 
    int j;
    cin>>j; 
    int n=1;

    while(n <= i) {
        int p = 1; 
        while(p <= j) {
            cout << "*" << " ";
            p = p + 1; 
        }
        cout << endl;
        n = n + 1; 
    }

    return 0;
}
