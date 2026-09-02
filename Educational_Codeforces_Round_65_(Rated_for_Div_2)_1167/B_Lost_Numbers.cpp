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

#define rep(i, arr, b) for (ll i = arr; i < b; i++)

/* ===================== BASIC MATH ===================== */

inline ll ceilf(ll arr, ll b) { return (arr + b - 1) / b; }
inline ll floorf(ll arr, ll b) { return arr / b; }

ll gcd(ll arr, ll b) { return (b == 0) ? arr : gcd(b, arr % b); }
ll lcm(ll arr, ll b) { return (arr / gcd(arr, b)) * b; }

ll power(ll arr, ll b) {
    if (b == 0) return 1;
    ll res = power(arr, b / 2);
    res *= res;
    if (b & 1) res *= arr;
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

ll mul(ll arr, ll b) { return (arr % mod) * (b % mod) % mod; }
ll addm(ll arr, ll b) { return (arr % mod + b % mod) % mod; }
ll subtm(ll arr, ll b) { return (arr % mod - b % mod + mod) % mod; }
ll modInv(ll x) { return binpow(x, mod - 2, mod); }
ll divm(ll arr, ll b) { return mul(arr, modInv(b)); }

/* ===================== NUMBER THEORY ===================== */

bool isPrime(ll x) {
    if (x < 2) return false;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

ll countSetBits(ll num) {
    ll cnt = 0;
    while (num) {
        cnt += num & 1;
        num >>= 1;
    }
    return cnt;
}

ll sumOfDigits(ll n) {
    ll sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

ll cnt_noOfDigits(ll num) {
    if (num == 0) return 1;
    return (ll)log10(num) + 1;
}

vector<ll> divisors(ll x) {
    vector<ll> ans;
    for (ll i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            ans.pb(i);
            if (i * i != x) ans.pb(x / i);
        }
    }
    return ans;
}

vector<pair<ll, ll>> Factors(ll x) {
    vector<pair<ll, ll>> ans;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            ll cnt = 0;
            while (x % i == 0) {
                x /= i;
                cnt++;
            }
            ans.pb({i, cnt});
        }
    }
    if (x > 1) ans.pb({x, 1});
    return ans;
}

/* ===================== COMBINATORICS ===================== */

ll nCr(ll n, ll r) {
    if (r > n || r < 0) return 0;
    double res = 1;
    for (ll i = 1; i <= r; i++) {
        res = res * (n - r + i) / i;
    }
    return (ll)(res + 0.01);
}

/* ===================== DATA STRUCTURES ===================== */

struct bag {
    ll cur_sum = 0;
    map<ll, ll> mp;

    void insert(ll x) {
        cur_sum += x;
        mp[x]++;
    }

    void remove(ll x) {
        cur_sum -= x;
        mp[x]--;
        if (mp[x] == 0) mp.erase(x);
    }

    ll sum() { return cur_sum; }

    ll getmax() {
        return mp.empty() ? -1 : prev(mp.end())->first;
    }

    ll getdistinct() { return mp.size(); }
};

/* ===================== DEBUG ===================== */
#define deb(arr,n) cout<<#arr<<" : "; for(ll i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
#define debmat(mat,row,col) cout<<#mat<<" :\n"; for(ll i=0;i<row;i++){ for(ll j=0;j<col;j++) cout<<mat[i][j]<<" "; cout<<endl; }
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)

template <class S, class T>
ostream& operator <<(ostream& os, const pair<S, T>& p) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template <class T>
ostream& operator <<(ostream& os, const vector<T>& p) {
    os << "[ ";
    for (auto& it : p) os << it << " ";
    return os << "]";
}

template <class T>
ostream& operator <<(ostream& os, const unordered_set<T>& p) {
    os << "[ ";
    for (auto& it : p) os << it << " ";
    return os << "]";
}

template <class S, class T>
ostream& operator <<(ostream& os, const unordered_map<S, T>& p) {
    os << "[ ";
    for (auto& it : p) os << it << " ";
    return os << "]";
}

template <class T>
ostream& operator <<(ostream& os, const set<T>& p) {
    os << "[ ";
    for (auto& it : p) os << it << " ";
    return os << "]";
}

template <class T>
ostream& operator <<(ostream& os, const multiset<T>& p) {
    os << "[ ";
    for (auto& it : p) os << it << " ";
    return os << "]";
}

template <class S, class T>
ostream& operator <<(ostream& os, const map<S, T>& p) {
    os << "[ ";
    for (auto& it : p) os << it << " ";
    return os << "]";
}

template <class T>
void dbs(string str, T t) {
    cout << str << " : " << t << "\n";
}

template <class T, class... S>
void dbs(string str, T t, S... s) {
    ll idx = str.find(',');
    cout << str.substr(0, idx) << " : " << t << ",";
    dbs(str.substr(idx + 1), s...);
}

template <class T>
void prc(T arr, T b) {
    cout << "[";
    for (T i = arr; i != b; ++i) {
        if (i != arr) cout << ", ";
        cout << *i;
    }
    cout << "]\n";
}
void print(ll aa[], ll n) {
    for (ll i = 0; i < n; i++) {
        cout << aa[i] << " ";
    }
    cout << endl;
}
/* ===================== SOLUTION ===================== */

ll n, k;
ll arr, b, c;
string s;
ll aa[1000100];
ll query(ll i,ll j) {
		cout <<"? "<<i+1<<' '<<j+1<<endl;
		ll ans;
		cin>>ans; 
		return ans;
}
ll common(pair<ll,ll>a,pair<ll,ll>b) {
		if (a.first==b.first||a.first==b.second) return a.first;
		else return a.second;
}
ll other(pair<ll,ll> p,ll a) {
		if (p.first==a) return p.second;
		else return p.first;
}
void solve() {
   vector<ll> arr = {4,8,15,16,23,42};
		 n=arr.size();
		
		map<ll, pair<ll, ll>> m;
		for (ll i=0;i<n;i++) {
				for (ll j=i+1;j<n;j++) {
						m[arr[i] * arr[j]] = {arr[i], arr[j]};
			}
		}
		vector<ll> ans(6);
		auto p1 = m[query(0, 1)];
		auto p2 = m[query(1, 2)];
		ans[1] = common(p1, p2);
		ans[0] = other(p1, ans[1]); 
		ans[2] = other(p2, ans[1]); 

		p1 = m[query(3, 4)];
		p2 = m[query(4, 5)];
		ans[4] = common(p1, p2); 
		ans[3] = other(p1, ans[4]);
		ans[5] = other(p2, ans[4]);
		
		cout << "! ";
		for (auto x:ans) cout <<x<< ' ';
		cout << endl;

}

/* ===================== MAIN ===================== */
signed main() {
  solve();
    return 0;
}