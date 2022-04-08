#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y){
            cout<<"NO\n";
        }
        else if(x==y){
            cout<<"YES\n";
        }
        else{cout<<"YES\n";}
    }
	// your code goes here
	return 0;
}
