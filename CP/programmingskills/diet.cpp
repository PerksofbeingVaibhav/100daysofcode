#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int k,a[100],n,l=0,i;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>=k)
            {
                a[i+1]+=a[i]-k;
                l++;
            }
            else
            {
                cout<<"NO "<<i+1<<endl;
                break;
            }
        }
        if(l==n) cout<<"YES"<<endl;
    }
    return 0;
}
