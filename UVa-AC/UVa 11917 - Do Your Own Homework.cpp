/*
  Name: UVa 11917 - Do Your Own Homework
  Author: 3T //mailto:kasparovandme@gmail.com
  Date: 9/5/2012
  Description: ad hoc
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

int n, t, a, b, c, d;

map <string, int> M2;

string name2, due2;

int main () {
    //freopen(INP, "r", stdin); freopen(OUT, "w", stdout);
    scanf(" %d ", &t);
    FOR(i, 1, t){
        M2.clear();
        scanf(" %d ", &n);
        FOR(j, 1, n){
            cin >> name2 >> a;
            M2[name2] = a;    
        }
        scanf(" %d ", &d);
        cin >> due2;
        printf("Case %d: ", i);   
        if(M2[due2] == 0 || ((M2[due2] != 0) && (M2[due2] > d + 5))) printf("Do your own homework!\n");
        else if(M2[due2] <= d) printf("Yesss\n"); 
        else printf("Late\n");         
    }
    return 0;
}
