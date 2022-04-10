
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int tc;
  cin>>tc;
  while(tc--){
      long long a1,b1;
      cin>>a1>>b1;
      if(a1==1 || b1==1){
          cout<<-1<<endl;
      }else if(__gcd(a1,b1)==1){
          cout<<1<<endl;
      }else{
          cout<<0<<endl;
      }
  }
  return 0;
}
