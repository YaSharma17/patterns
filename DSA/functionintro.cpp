#include<iostream>
using namespace std;
int main() {

    //power a to b
    int a , b ;
    cin>> a >> b;
    int ans=1;
    for (int i = 1; i <=b; i++)
    {
        ans= ans*a;

    }
    cout<<" Answer is: "<<ans<<endl;
    return 0;

}