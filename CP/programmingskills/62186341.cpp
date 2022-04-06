#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int num,cnt=0;
	   cin>>num;
	   if(num%4==0){
	       //cnt++;
	       cout<<num/4<<"\n";
	   }
	   else{
	       cout<<floor(num/4)+1<<"\n";
	   }
	   //cout<<cnt<<"\n";
	}
	return 0;
}
