/*
  Name: UVa 12250 Language Detection        
  Author: 3T //mailto:kasparovandme@gmail.com
  Date: 8/5/2012
  Description: ad hoc
  Time Limit: 3.000s
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

#define FOR(i,a,b) for (int i = (a), _b = (b); i <= _b; i++)
#define FORD(i,a,b) for (int i = (a), _b = (b); i >= _b; i--)
#define REP(i,n) for (int i = 0, _n = (n); i < _n; i++)
#define REPD(i,n) for (int i = (n) - 1; i >= 0; i--)
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define fill(ar, val) memset(ar, val, sizeof(ar))

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
#define MAXN 100000

#define INP "test.inp"
#define OUT "test.out"

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<int> vi;

map <string, string> L;

int n, t, a, b, c(0);
string s, ans;

void Gen(){
    L["HELLO"] = "ENGLISH";  L["HOLA"] = "SPANISH"; L["HALLO"] = "GERMAN";  
    L["BONJOUR"] = "FRENCH";  L["CIAO"] = "ITALIAN"; L["ZDRAVSTVUJTE"] = "RUSSIAN";     
}

int main () {
    //freopen(INP, "r", stdin); freopen(OUT, "w", stdout);
    Gen();
    while(cin >> s){
        if(s == "#") break;
        c++;
        if(L[s] != "") ans = L[s];
        else ans = "UNKNOWN";
        cout << "Case " << c << ": " << ans << endl;    
    }
    return 0;
}
