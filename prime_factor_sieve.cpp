#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define ull unsigned long long
#define nl endl
#define pb push_back

const int N = 1e7+10;
const ll MOD = 1e7+1;

ll v1[MOD];
void sieve(){
    for(int i = 2;i*i<MOD;i++){
        if(v1[i]==-1){
            for(int j = i+i;j<MOD;j+=i){
                if(v1[i]==-1)   v1[j] = i;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(v1,-1,sizeof v1);
    sieve();
    int t;  cin>>t;
    while(t>1){
        if(v1[t]==-1){
            cout<<t<<nl;
            break;
        }
        cout<<v1[t]<<" ";
        t /= v1[t];
    }


    return 0;
}