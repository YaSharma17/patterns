#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
     
    int i=1;
    while(i<=n){

        //first triangle
        int j=i,count=1;
        while(j<=n){
            cout<<count;
            count= count+1;
            j++;
        }
        //stars triangle
        int s1=i-1;
        while(s1){
            cout<<"*";
            s1--;
        }
        //second stars triangle
        int s2=i-1;
        while(s2){
            cout<<"*";
            s2--;
        }
        //second triangle
        int k=i;
        while(k<=n){
            cout<<n-k+1;
            k++;
        }
        cout<<endl;
        i++;
    } 
}