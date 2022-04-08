#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,m;
        cin>>x>>y>>m;
        if(x*m<y){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
	// your code goes here
	return 0;
}
/*
x=avail , y=coins left for purchase a cooler
m=months last 
*/