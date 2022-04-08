#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;

#define ll long long
#define all(x) x.begin(),x.end()
#define ull unsigned long long
#define nl endl
const ll MOD = 1e9+7;
#define pb push_back
#define FOR(i,n) for(ll i = 0; i < n; i++)

const int M = 51;

ll m1[M][M],I[M][M];

void multiple_matrix(ll a[][M],ll b[][M],ll size){
    ll res[size+1][size+1];
    FOR(i,size){
        FOR(j,size){
            res[i][j] = 0;
            FOR(k,size)     res[i][j] = (res[i][j]%MOD+((a[i][k]%MOD)*(b[k][j]%MOD)%MOD))%MOD;
        }
    }
    FOR(i,size) FOR(j,size)     a[i][j] = res[i][j];
}

void power(ll a[][M],ll size,ll b){
    FOR(i,size)  FOR(j,size){
        if(i==j)    I[i][j] = 1;
        else        I[i][j] = 0;
    }

    // linear method // FOR(i,b)    multiple_matrix(I,m1,size);
    // binary expo
    while(b){
        if(b%2){
            multiple_matrix(I,m1,size);
            b--;
        }
        multiple_matrix(m1,m1,size);
        b/=2;
    }
    FOR(i,size) FOR(j,size)     m1[i][j] = I[i][j];

}

void print_matrix(ll h[][M],ll size){
    FOR(i,size){
        FOR(j,size){
            cout<<h[i][j]<<" ";
        }   cout<<nl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;  cin>>t;
    while(t--){
        int n,base;  cin>>n>>base;
        FOR(i,n) FOR(j,n)   cin>>m1[i][j];

        power(m1,n,base);
        print_matrix(I,n);
    }

    return 0;
}
