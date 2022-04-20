#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
       int n;
       long long int k;
    cin>>n>>k;
    vector<long long> V(n);
    int sum=0;
for(int i=0;i<n;i++){
    cin>>V[i];
}
     int mini=*min_element(V.begin(),V.end());
        int x=k/mini;
        if(k%mini){x++;}
        cout<<max(n,x)<<"\n";
    }	// your code goes here
	return 0;
}
