#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pr printf
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define MAX 100007
#define MOD 1000000007
#define MODL 1000000007LL
#define EPS 1e-12
#define sz(x) ((int)(x).size())
#define L(x) ((x)*2+1)
#define R(x) ((x)*2+2)


typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;

#ifdef EBUG
#include "trace.h"
#else
#define trace(...) assert(true)
#define recInit(...) assert(true)
#define recEnd(...) assert(true)
#define recInfo(...) assert(true)
#define trace2(...) assert(true)
#endif

int MD(int x) {
	if(x < 0) return x+MOD;
	if(x >= MOD) return x-MOD;
	return x;
}

ll MDL(ll x) {
	return (x%MODL+MODL)%MODL;
}

ll modpow(ll a, ll b, ll m) {
	if (!b) return 1LL;
	if (b&1LL) return a*modpow(a, b-1, m)%m;
	ll r = modpow(a, b>>1, m);
	return r*r%m;
}

//m prime
ll invmod(ll a , ll m) {
	return modpow(a, m-2, m);
}

vector<char> getString() {
    char ch = (char)getchar();
    vector<char> ret;
    while((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        ret.pb(ch);
        ch = (char)getchar();
    }
    return ret;
}

int n,m,q,t = 1;

ll a,b,c,d;
// int a,b,c,d;

int main(){//sc("%d", &t);
while(t--){
	
	sc("%d", &n);
	
}}
