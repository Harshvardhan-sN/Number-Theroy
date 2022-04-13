#include<bits/stdc++.h>
using namespace std;
// const int N = 1e7+10;

#define ll long long
#define all(x) x.begin(),x.end()
#define ull unsigned long long
#define nl endl
const ll MOD = 1e9+7;
#define FOR(i,n) for(int i = 0; i < n; i++)
#define pb push_back
const int N = 1e6+7;
ll F[N];

ll pow_x(ll a, ll n){
    ll res = 1;
    while(n){
        if(n&1)     res = (res*1LL*a)%MOD;
        a = (a*a)%MOD;
        n >>=1;
    }
    return res;
}

ll combination(ll n,ll k){
    if(k>n)     return 0;

    ll res = F[n];
    res = (res*pow_x(F[k],MOD-2))%MOD;
    res = (res*pow_x(F[n-k],MOD-2))%MOD;

    return res;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    F[0] = F[1] = 1;

    for(int i = 2;i<=N;i++){
        F[i] = (F[i-1] * 1LL * i) % MOD;
    }

    int q,n,k;  cin>>q;
    while(q--){
        cin>>n>>k;

        cout<<combination(n,k)<<nl;
    }

    return 0;
}