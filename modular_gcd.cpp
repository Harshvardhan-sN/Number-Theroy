#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;

#define ll long long
#define all(x) x.begin(),x.end()
#define ull unsigned long long
#define nl endl
const ll mod = 1e7+1;
#define FOR(i,n) for(int i = 0; i < n; i++)
#define pb push_back

ull pow_x_mod(ll a, ll b, ll m) {
    ll res = 1;
    a %= m;
    while (b) {
        if (b & 1)     res = ((res % m) * (a % m)) % m;
        a = ((a % m) * (a % m)) % m;
        b >>= 1;
    }
    return res;
}

ll gcd( ll a, ll b, ll n) {
    if (a == b) {
        return (pow_x_mod(a, n, mod) + pow_x_mod(b, n, mod)) % mod;
    }
    ll maxi = 1;
    ll num = a - b;

    for (ll i = 2; i * i <= num; i++) {
        if (!(num % i)) {
            ll temp = (pow_x_mod(a, n, i) + pow_x_mod(b, n, i)) % i;
            if (!temp)   maxi = max(maxi, i);

            temp = (pow_x_mod(a, n, num / i) + pow_x_mod(b, n, num / i)) % (num / i);
            if (!temp)   maxi = max(maxi, num / i);
        }
    }
    return maxi;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    long p = 1;
    long t;  cin >> t;

    while (t--) {
        ll ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;

        ull a, b, n;  cin >> a >> b >> n;

        cout << gcd(a, b, n) << nl;

    }

    return 0;
}