#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        //int cnt=0;
        if(y%x!=0){
            cout<<(y/x)<<endl;        }
        //cout<<cnt<<endl;
        else{cout<<(y/x)-1<<endl;}
    }
	// your code goes here
	return 0;
}
