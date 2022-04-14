#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define nl endl
#define pb push_back
const ll N = 1e5 + 7;
const ll K = 1e5 + 1;

vector<int> v1;
bool sieve[K];
bool m1[N];

void prime(){
    sieve[0] = sieve[1] = 1;
    for(int i = 2;i<K;i++){
        if(!(sieve[i])){
            for(int j = 2*i;j<K;j+=i){
                sieve[j] = 1;
            }
        }
    }
    for(int i = 2;i<K;i++){
        if(!(sieve[i]))     v1.pb(i);
    }
}
void result(int l,int r){
    if(l == 1)  l++;

    int k = r - l + 1;
    vector<int> m1(k,0);
    for(auto &it:v1){
        if(it*it<=r){
            int i = (l/it)*it;
            if(i<l)     i+=it;

            for(i;i<=r;i+=it){
                if(i!=it){
                    m1[i-l] = 1;
                }
            }
        }
    }
    for(int i = 0;i<k;i++){
        if(m1[i]==0)    cout<<l+i<<nl;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);      cout.tie(NULL);
    prime();

    int t;  cin>>t;
    while(t--){
        int l,r;     cin>>l>>r;
        result(l,r);
        cout<<nl;
    }


    return 0;
}