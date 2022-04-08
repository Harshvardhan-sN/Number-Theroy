#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define nl endl
#define pb push_back
const ll N = 1e7+1;
const ll MOD = 1000001;

//  ***************    NlnlnN    ************


bool prime[MOD];
void sieve(){
    prime[0] = prime[1] = 1;

    for(ll i = 2;i*i<=MOD; i++){
        if(!prime[i]){
            for(ll j = i*i;j<=MOD;j+=i){
                prime[j] = 1;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    ll n;   cin>>n;
    cout<< (!prime[n] ? "prime number" : "composite");


    return 0;
}