#include <bits/stdc++.h>
using namespace std;

/*============= Standard Macros =================*/
#define ll long long
#define endl "\n"
#define faster() (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0))

/* ===================== SOLUTION ===================== */
void solve() {
    ll n;
  cin >> n;
   ll k = log2(n-1);
  ll pw = (1<<k);
  for(ll i=pw-1;i>=0;i--) {
   cout << i<<" ";
   }
  for(ll i=pw;i<n;i++){
      cout << i<<" ";
    }
  cout << endl;
}

/* ===================== MAIN ===================== */

signed main() {
    faster();
    ll tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}