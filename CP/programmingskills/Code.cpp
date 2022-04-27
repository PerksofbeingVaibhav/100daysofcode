#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    string s;
    cin>>s;
    int n=s.size();
    int i=0,j=n-1;
    while(i!=j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else if(s[i]>s[j])
        {
            string t="";
            t=t+s[i];
            s.insert(j+1,t);
            i++;
        }
        else
        {
            string t="";
            t=t+s[j];
            s.insert(i,t);
            j--;
            i++;
            j++;
        }
    }
    cout<<s<<"\n";
    return 0;
}
