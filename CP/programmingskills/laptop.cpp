#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--){
      int n;
      cin>>n;
      int a[n],ma=0;
      map<int,int>mp;
      for(int i=0;i<n;i++){
          cin>>a[i];
          mp[a[i]]++;
          ma=max(ma,mp[a[i]]);
      }
      int ans,c=0;
      for(auto it:mp){
          if(it.second==ma){
              ans=it.first;
              c++;
          }
      }
      if(c==1){
          cout<<ans<<endl;
      }
      else{
          cout<<"confused";
          cout<<endl;
      }
    }
	// your code goes here
	return 0;
}
