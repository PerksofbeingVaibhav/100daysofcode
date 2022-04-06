#include <iostream>
using namespace std;
int main() {
    
    int t;
    cin>>t;
    while(t--){
    int N,M;
    cin>>N>>M; 
    bool k1=false;
    string S,T;
    cin>>S>>T; 
    for(char i='a';i<'f';i++){ 
        int k=0;
        string s1(S.size(),0); 
        for(int j=0;j<S.size();j++){ 
            if(S[j]=='?'){ 
                s1[j]=i; 
            } 
            else{ 
                s1[j]=S[j];  
            } 
            if(s1[j]==T[k] and k < M){
                    k++;
            }
        }
        if(k!=M){ 
            cout<<s1<<endl; 
            k1=true;
            break; 
        } 
    } 
    if(!k1)
    cout<<-1<<endl; 
    }
}