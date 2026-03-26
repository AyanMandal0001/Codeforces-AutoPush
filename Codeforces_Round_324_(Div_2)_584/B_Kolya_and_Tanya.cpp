#include <bits/stdc++.h>
using namespace std;
#define int long long
const int m = 1e9+7;
int  binpow(int  base, int exp, int m) {
    base %= m;
    int  result = 1;
    while (exp > 0) {
        if (exp & 1)
            result = (result * base) % m;
        base = (base * base) % m;
        exp >>= 1;
    }
    return result;
}
void solve(){
    int n ; cin >> n ;
   
    int ans= binpow(3,3*n,m) - binpow(7,n,m);
    cout <<  (ans+m)%m;
}
signed main(){ 
 //   int tt ; cin >> tt; while(tt--)
    solve ();
    return 0;
}