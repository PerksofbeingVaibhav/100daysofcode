#include <iostream>
using namespace std;

int main() {
  // your code goes here
 int t;
 cin>>t;
 while(t--){
     long long num;
     cin>>num;
     long long a1=num & ~(num-1);
     if(num&1 || num==a1)  cout<<-1<<endl;
     else cout<< a1/2 <<" "<<num/2<<" "<<(num-a1)/2<<endl;
     
     
 }
 return 0;
}