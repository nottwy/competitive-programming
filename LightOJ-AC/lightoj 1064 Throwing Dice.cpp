/*
  Name: LightOJ 1064 - Throwing Dice 
  Author: 3T //mailto:kasparovandme@gmail.com
  Date: 7/11/2012
  Description: dp, dice, probability
  Time Limit: 2.000s
*/

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

#define fr(i,a,b) for (int i = (a), _b = (b); i <= _b; i++)
#define frr(i,a,b) for (int i = (a), _b = (b); i >= _b; i--)
#define rep(i,n) for (int i = 0, _n = (n); i < _n; i++)
#define repr(i,n) for (int i = (n) - 1; i >= 0; i--)
#define FOR(i,a,b) for (int i = (a), _b = (b); i <= _b; i++)
#define FORD(i,a,b) for (int i = (a), _b = (b); i >= _b; i--)
#define REP(i,n) for (int i = 0, _n = (n); i < _n; i++)
#define REPD(i,n) for (int i = (n) - 1; i >= 0; i--)
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define fill(ar, val) memset(ar, val, sizeof(ar))
#define debug(x) cout<<#x<<": "<<x<<endl

#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#define BIT(n) (1<<(n))
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a) | (b))
#define XOR(a,b) ((a) ^ (b))
#define sqr(x) ((x) * (x))

#define PI 3.1415926535897932385
#define INF 1000111222
#define EPS 1e-7
#define MAXN 155
#define MOD 1000000007

#define INP "test.inp"
#define OUT "test.out"

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<string> vs;

template<typename T>inline T gcd(T a, T b){if (b == 0)return a;else return gcd(b, a % b);}
template<typename T>inline T lcm(T a, T b){return (a * b) / gcd(a, b);}

int n, t, m, a, b, c, x;

#define TYPE uint64

TYPE f[30][MAXN], ans1, ans2, omega;

void solve(){
    omega = 1ll; 
    FOR(i,1,n) omega *= 6ll;
    FOR(i,1,n) FOR(j,0,x) f[i][j] = 0ll;
    f[0][0] = 1;
    FOR(i,1,n) FOR(j,1,x) FOR(k,1,6){
        if(j - k >= 0) f[i][j] += f[i-1][j-k];    
    }    
    ans1 = 0ll;
    FOR(i,1,x-1) ans1 += f[n][i];
    ans1 = omega - ans1;
    ans2 = omega;
    TYPE tmp = gcd(ans1, ans2);
    ans1 /= tmp; ans2 /= tmp;
    
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen(INP, "r", stdin); freopen(OUT, "w", stdout);
    #endif
    
    scanf("%d", &t);
    FOR(tt,1,t){
        scanf("%d%d", &n, &x);
        printf("Case %d: ", tt);
        if(!x) printf("1\n");
        else {
            solve();
            if(ans2 != 1) cout << ans1 << "/" << ans2 << endl;
            else cout << ans1 << endl;
        }
    }

    return 0;
}
