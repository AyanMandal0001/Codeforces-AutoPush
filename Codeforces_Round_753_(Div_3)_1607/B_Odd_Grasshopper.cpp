#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve() {
    ll x, n;
    cin >> x >> n;
    
    if (n == 0) {
        cout << x << endl;
        return;
    }
       
    ll rem = n % 4;   
    ll ans = x;

    if (x % 2 == 0) {
        if (rem == 1) {
            ans -= n;
        } else if (rem == 2) {
            ans += 1;
        } else if (rem == 3) {
            ans += n + 1;
        }
    } else { 
        if (rem == 1) {
            ans += n;
        } else if (rem == 2) {
            ans -= 1;
        } else if (rem == 3) {
            ans -= (n + 1);
        }
    }
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    
    return 0;
}