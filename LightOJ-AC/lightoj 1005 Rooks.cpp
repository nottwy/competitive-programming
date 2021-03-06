/*
  Name: Light Oj 1005 Rooks
  Author: 3T //mailto:kasparovandme@gmail.com
  Date: 8/11/2012
  Description: dp, counting
  Time Limit: 1.000s
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
#define MAXN 20000
#define MAXC 30
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

int n, t, m, a, b;
uint64 c[MAXC+5][MAXC+5];

void pre(){
    c[1][0] = c[1][1] = 1;
    FOR(i,2,MAXC){
        c[i][0] = c[i][i] = 1;
        FOR(j,1,i-1) c[i][j] = c[i-1][j-1] + c[i-1][j];    
    }    
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen(INP, "r", stdin); freopen(OUT, "w", stdout);
    #endif
    
    pre();
    scanf("%d", &t);
    FOR(tt,1,t){
        scanf("%d%d", &n, &m);
        uint64 ans = 1;
        REP(i,m) ans *= (uint64)(n-i);
        ans *= c[n][m];
        printf("Case %d: ", tt);    
        //cout << ans << endl;
        printf("%llu\n", ans);
    }

    return 0;
}
