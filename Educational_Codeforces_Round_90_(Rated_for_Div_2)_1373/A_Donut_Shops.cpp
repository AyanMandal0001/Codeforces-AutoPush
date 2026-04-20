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

#define ff first
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

/* ===================== BASIC MATH ===================== */

inline ll ceilf(ll a, ll b) { return (a + b - 1) / b; }
inline ll floorf(ll a, ll b) { return a / b; }

ll gcd(ll a, ll b) { return (b == 0) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll power(ll a, ll b) {
    if (b == 0) return 1;
    ll res = power(a, b / 2);
    res *= res;
    if (b & 1) res *= a;
    return res;
}

ll binpow(ll b, ll p, ll m) {
    ll ans = 1;
    b %= m;
    while (p) {
        if (p & 1) ans = ans * b % m;
        b = b * b % m;
        p >>= 1;
    }
    return ans;
}

ll mul(ll a, ll b) { return (a % mod) * (b % mod) % mod; }
ll addm(ll a, ll b) { return (a % mod + b % mod) % mod; }
ll subtm(ll a, ll b) { return (a % mod - b % mod + mod) % mod; }
ll modInv(ll x) { return binpow(x, mod - 2, mod); }
ll divm(ll a, ll b) { return mul(a, modInv(b)); }

/* ===================== SOLUTION ===================== */

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll ans1 = -1, ans2 = -1;

    if (a < c) ans1 = 1;
    if (c < a * b) ans2 = b;

    cout << ans1 << " " << ans2 << endl;
}

/* ===================== MAIN ===================== */

signed main() {
    faster();
    ll tt;
    cin >> tt;
    while (tt--) solve();
    return 0;
}