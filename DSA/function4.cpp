#include<iostream>
using namespace std;
bool isprime(int n){
 for (int i=2; i<n; i++){
        if (n % i == 0)
        {
            cout<<"not prime"<<endl;
            return 0;
        }
    }
    cout<<"prime"<<endl;
    return 1;
}
int main(){
    int n;
    cin>>n;
   isprime(n);
    return 0;
}