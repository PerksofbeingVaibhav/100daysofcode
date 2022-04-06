#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
  // your code goes here
  long long  t;
  cin>>t;
  while(t--){
      long long  N;
      cin>>N;
      long long array[N];
      for(long long  i=0;i<N;i++){
          cin>>array[i];
      }
      vector<long long >a,b;
      for(long long  i=0;i<N;i++){
          if(array[i]%2==0){
             a.push_back(array[i]);
          }else{
              b.push_back(array[i]);
          }
     }
     if(b.size()%2!=0){
         cout<<a.size()<<endl;
     
      }
      else if(a.size()>=b.size() && b.size()!=0){
          cout<<b.size()/2<<endl;
          
          
      }
      else if(b.size()>a.size() && a.size()!=0){
          cout<<min(a.size(),(b.size()/2))<<endl;
      }
      else{
          // return 0;
          cout<<0<<endl;
      }
  }
  return 0;
}



