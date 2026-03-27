#include <bits/stdc++.h>
using namespace std;

/*============= Standard Macros =================*/
#define ll long long
const ll mod = 1e9 + 7;

#define faster() (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0))

#define state pair<ll, ll>
#define vi vector<ll>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define umap unordered_map
#define uset unordered_set

#define pb push_back
#define pback pop_back
#define eb emplace_back

#define ss second

#define lb lower_bound
#define ub upper_bound

#define contain(i, mp) ((mp).find(i) != (mp).end())
#define maxele(x) *max_element(all(x))
#define minele(x) *min_element(all(x))

#define len(s) (s).length()
#define nl cout << '\n'
#define endl '\n'

#define rep(i, a, b) for (ll i = a; i < b; i++)

/* ===================== SOLUTION ===================== */

ll n,w, k;
ll a, b, c;
string s;
ll aa[1000100];

void solve() {
  cin >> n >> w;
  vector<ll>bit(32,0);
  for(ll i=0;i<n;i++){  cin >> aa[i];bit[log2(aa[i])]++;}
//   print(aa,n);
  ll depth=0;
  ll left=0;
  ll item=0;
  while(item<n){
      ll maxele = -1;
    for(int i=31;i>=0;i--){
        if(bit[i]>0 && (1LL<<i) <= left ){
           maxele = (1LL<<i);
           break;
        }
    }
        if(maxele== -1) {
             depth++;
            left=w;
        }
        else{
            ll t =min(bit[log2(maxele)],left/maxele);
            bit[log2(maxele)] -= t;
            item += t;
            left -= t * maxele;
        }
  }
  cout << depth << endl;
}
/* ===================== MAIN ===================== */

signed main() {
    faster();
    ll tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}