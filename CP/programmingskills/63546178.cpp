#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int a[N];
        int x1=0,y1=0;
        //loop(N){
        for(int i=0;i<N;i++){
            cin>>a[i];
            if(a[i]==-1)
            x1++;
            else 
            y1++;
        }
        if(abs(x1-y1)<2){
            cout<<"YES";
        }
        else if(abs(x1-y1)==2){
            if(x1%2) cout<<"NO";
            else
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}