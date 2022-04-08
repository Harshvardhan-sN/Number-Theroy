#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;

#define ll long long
#define all(x) x.begin(),x.end()
#define ull unsigned long long
#define nl endl
#define pb push_back

// **************    O(log(n))
ll pow_x(ll a,ll n){
    ll res = 1;
    while(n){
        if(n%2){
            res *= a;
            n--;
        }
        a*=a;
        n/=2;
    }
    return res;
}
ll mod_x(ll a,ll n,int m){
    ll res = 1;
    while(n){
        if(n%2){
            res = (a*a)%m;
            n--;
        }
        a = (a*a)%m;
        n/=2;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);

    int t;  cin>>t;
    while(t--){
        ll a,b;   cin>>a>>b;
        cout<<power(a,b)<<nl;
    }


    return 0;
}