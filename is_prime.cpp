#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;

#define ll long long
#define ull unsigned long long
#define nl endl
#define pb push_back


// ************               O(sqrt(N))       ********** //

bool is_prime(ll n){
    if(n==1)    return false;

    for(ll i = 2;i*i<=n;i++){
        if(n%i==0)  return false;
    }

    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;   cin>>n;

    cout<< (is_prime(n) ? "YES number is Prime" : "NO number is Prime");


    return 0;
}
