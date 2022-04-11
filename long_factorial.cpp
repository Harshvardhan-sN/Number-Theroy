#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long int ull;


#define fnf() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl "\n"
#define pb push_back
#define ff first
#define ss second
#define set_bits __builtin_popcountll
#define nmap unordered_map
#define CC continue
#define nset unordered_set
#define all(a) a.begin(),a.end()
#define i_max INT_MAX
#define i_min INT_MIN
#define me(x) memset(x,-1,sizeof(x))
#define sout cout << fixed << setprecision(12)
#define sz(x) ((int)(x).size())
#define le(x) x.length()
#define PI 3.141592653589793238462
#define FOR(i,n) for(int i=0; i < n; i++)


const ull N = 1e9;
const int lol = 100001;

vector<int> v1(lol, 0);

int multiple(int size, vector<int> &v1, int n) {
	int carry = 0;
	for (int i = 0; i < size ; i++) {
		int p = (v1[i] * n) + carry;
		v1[i] = p % 10;
		carry = p / 10;
	}
	while (carry) {
		v1[size] = carry % 10;
		carry /= 10;
		size++;
	}
	return size;
}

void fact(ll n) {
	v1[0] = 1;
	int s = 1;
	for (int i = 2; i <= n; i++) {
		s = multiple(s, v1, i);
	}
	for (int i = s - 1; i >= 0; i--) {
		cout << v1[i];
	}

}

int main() {
	fnf();

	ll ans1 = 0, ans2 = 0, ans3 = 0;

	ll n;	cin >> n;
	fact(n);

	return 0;

}