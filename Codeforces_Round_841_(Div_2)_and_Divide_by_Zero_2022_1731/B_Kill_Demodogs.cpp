#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int mod = 1e9 + 7;
int power(int a, int b, int m) {
    int res = 1;
    a %= m;
    while(b > 0) {
        if(b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int Inv(int a, int m) {
    return power(a, m - 2, m); 
}

void solve() {
    int n;
    cin >> n;
    n %= mod;
    int t1 =n;
    t1=(t1*((n+1)%mod))%mod;
    t1=(t1*((2*n+1) %mod))%mod;
    t1=(t1*Inv(3,mod)) %mod;
    int t2 =n;
    t2=(t2*((n-1+mod)%mod))%mod;
    t2=(t2*Inv(2,mod))%mod;
    int t3=(n*n) %mod;
    int ans=(t1+t2-t3+mod)%mod;
    ans = (ans*2022) %mod;
    
    cout << (ans+mod)%mod << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin >> tt; while(tt--) 
    solve();
}
