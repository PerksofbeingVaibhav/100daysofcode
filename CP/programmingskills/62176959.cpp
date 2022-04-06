#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int daily=y*30;
	    if(x>daily){cout<<"YES\n";}
	    else if(daily>x){cout<<"NO\n";}
	    else{cout<<"YES\n";}
	}
	return 0;
}
