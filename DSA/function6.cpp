#include<iostream>
using namespace std;
int setbit(int = num){
     int count=0;
    while(num)
    {
        if(num&1==1)
        {
            count+=1;
        }
    num=num>>1;
    cout<<"sum of set bits present in a and b are : ";

    }
    return count;
}


int main(){
    int a,b;
    cin>>a>>b;
    setbit(a,b);
    return 0;
}
