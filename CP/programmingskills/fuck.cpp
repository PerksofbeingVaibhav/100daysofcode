#include<bits/stdc++.h>
using namespace std;

#define testLoop int t; cin>>t; while(t--)
#define ll  long long int
#define loop(k,b,a) for(ll k=b;k<a;k++)
#define rloop(k,b,a) for(ll k=b;k>a;k--)
#define ff first
#define ss second
#define pb push_back
const long long INF = 10e9;
const long long MOD = 1e9 + 7;
const int MAXN = 2e5;
#define beg2end(count) count.begin(),count.end()
#define vl  vector<ll>
#define pl pair<ll,ll>
#define ml map<ll,ll>
#define NO_OF_CHARS 256



void func() {
    ll n; cin >> n;
    vl v;
    loop(i, 0, n) {
        ll x; cin >> x;
        v.pb(x);
    }
    sort(beg2end(v));
    vl v2;
    loop(i, 0, n) {
        if (v[i] > 0) {
            v2.pb(   (v[i] * (n - i)) - (i) );
        }
    }
    cout << *max_element(v2.begin(), v2.end()) << endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //testLoop{

    func();

    // }
    return 0;
}
