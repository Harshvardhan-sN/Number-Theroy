#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;

#define ll long long
#define all(x) x.begin(),x.end()
#define ull unsigned long long
#define nl endl
#define pb push_back

// ***************   O(sqrt(N))

void prime_factor(ll n){
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            int c = 0;
            while(n%i==0){
                c++;
                n/=i;
            }
            while(c--)  cout<<i<<" ";
        }
    }
    if(n>1)     cout<<n<<" ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    prime_factor(n);

    return 0;
}