#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;

#define ll long long
#define all(x) x.begin(),x.end()
#define ull unsigned long long
#define nl endl
const ll MOD = 1e7+1;
#define FOR(i,n) for(int i = 0; i < n; i++)
#define pb push_back




// ***********    O(sqrt(N))
ll etf(ll n){
    ll res = n;
    for(int i = 2;i*i<=n;i++){
        if(!(n%i)){
            res /= i;
            res *= (i-1);
        }
        while(!(n%i))   n /= i;
    }
    if(n>1){
        res /= n;
        res *= (n-1);
    }
    return res;
}

// **********       NloglogN
const long M = 1e6+1;
long arr[M];
void seive_etf(ll n){
    for(int i = 1; i<=n; i++){
        arr[i] = i;
    }
    for(int i = 2; i<= n;i++){
        if(arr[i] == i){
            for(int j = i;j<=n;j+=i){
                arr[j] /= i;
                arr[j] *= (i-1);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    seive_etf(M-1);

    long t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        cout<<"etf sqrt(N):  "<<etf(n)<<nl;
        cout<<"etf_seive NloglogN: "<<arr[n]<<nl;
    }

    return 0;
}