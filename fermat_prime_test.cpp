#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;

#define ll long long int
#define all(x) x.begin(),x.end()
#define ull unsigned long long
#define nl endl
const ll MOD = 1e7+1;
#define FOR(i,n) for(int i = 0; i < n; i++)
#define pb push_back

ll mod_x(ll a,ll n,ll m){
    ll x = 0;
    ll y = a%m;
    while(n>0){
        if(n%2==1){
            x = (x+y)%m;
        }
        y = (y*2LL)%m;
        n /= 2;
    }
    return x%m;
}

ll pow_x(ll a,ll n,ll m){
    ll res = 1;
    while(n){
        if(n&1){
            res = mod_x(res,a,m);
        }
        n >>= 1;
        a = mod_x(a,a,m);
    }
    return res%m;
}

bool is_prime(ll n,int opr = 5){
    if(n<=4)    return n==3 || n==2;

    for(int i = 1;i<=opr;i++){
        ll a = 2 + rand()%(n-3);
        ll res = pow_x(a,n-1,n);
        if(res!=1)     return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        if(is_prime(n))     cout<<"YES"<<nl;
        else                cout<<"NO"<<nl;
    }

    return 0;
}