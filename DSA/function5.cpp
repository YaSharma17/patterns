#include<iostream>
using namespace std;
int apnumber(int n){
    return (3*n+7);
    
}
int main(){
    int n;
    cin>>n;
    apnumber(n);
    cout<<apnumber(n)<<endl;

    return 0;
}
