#include<iostream>
using namespace std;
// we are simply printing nothing to return so we can use void here

void printCounting(int n){
    for(int i=1; i<=n; i++){
        cout<< i <<" ";


    }
    cout<<endl;
     
}
int main(){
   int n;
   cin>>n;
   //function call
   printCounting(n);
    return 0;

}