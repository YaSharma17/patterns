#include<iostream>
using namespace std;

//1=even hoga
//0=odd hoga
bool isEven(int num ){
    // odd
    if (num&1){
        return 0;

    }
    else{
        return 1;
    }
   

}
int main() {
    int num;
    cin>>num;

    if (isEven(num)){
        cout<<"Number is Even: "<<endl;
    }
    else{
        cout<<"Number is Odd: "<<endl;
    }


}