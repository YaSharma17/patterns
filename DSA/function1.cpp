#include<iostream>
using namespace std;

int power(){
    int a, b;
    cin>>a>>b;
    int answer=1;
    for (int i=1; i<=b; i++){
        answer = answer*a;

    }
    return answer;
}
int main(){
// int a , b;
// cin>>a>>b;

//   int ans = power ( a , b);
   int ans= power();
  cout<< "Answer is: "<< ans << endl;

 ans= power();
  cout<< "Answer is: "<< ans << endl;
  ans= power();
  cout<< "Answer is: "<< ans << endl;
  ans= power();
  cout<< "Answer is: "<< ans << endl;

   return 0;

}