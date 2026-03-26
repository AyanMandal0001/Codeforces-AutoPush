#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve() {
    ll n;
    cin >> n;  
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % n != 0) return false;  
    ll val = sum / n;
    ll bag = 0;
    for(ll i=0;i<n;i++){
        if(a[i]>= val) bag += a[i]-val;
        else{
            ll req = val-a[i];
            if(bag < req) return false;
            else bag -= req ;
        }
    }
    return true;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        if (solve())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
