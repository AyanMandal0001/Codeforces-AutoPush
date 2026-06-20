#include <bits/stdc++.h>
using namespace std;

/*============= Standard Macros =================*/
const int mod = 1e9 + 7;

#define faster() (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0))

#define state pair<int, int>
#define vi vector<int>

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

#define rep(i, a, b) for (int i = a; i < b; i++)

/* ===================== BASIC MATH ===================== */

inline int ceilf(int a, int b) { return (a + b - 1) / b; }
inline int floorf(int a, int b) { return a / b; }

int gcd(int a, int b) { return (b == 0) ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

int power(int a, int b) {
    if (b == 0) return 1;
    int res = power(a, b / 2);
    res *= res;
    if (b & 1) res *= a;
    return res;
}

int binpow(int b, int p, int m) {
    int ans = 1;
    b %= m;
    while (p) {
        if (p & 1) ans = ans * b % m;
        b = b * b % m;
        p >>= 1;
    }
    return ans;
}

int mul(int a, int b) { return (a % mod) * (b % mod) % mod; }
int addm(int a, int b) { return (a % mod + b % mod) % mod; }
int subtm(int a, int b) { return (a % mod - b % mod + mod) % mod; }
int modInv(int x) { return binpow(x, mod - 2, mod); }
int divm(int a, int b) { return mul(a, modInv(b)); }

/* ===================== NUMBER THEORY ===================== */

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int countSetBits(int num) {
    int cnt = 0;
    while (num) {
        cnt += num & 1;
        num >>= 1;
    }
    return cnt;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int cnt_noOfDigits(int num) {
    if (num == 0) return 1;
    return (int)log10(num) + 1;
}

vector<int> divisors(int x) {
    vector<int> ans;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            ans.pb(i);
            if (i * i != x) ans.pb(x / i);
        }
    }
    return ans;
}

vector<pair<int, int>> Factors(int x) {
    vector<pair<int, int>> ans;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            int cnt = 0;
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

int nCr(int n, int r) {
    if (r > n || r < 0) return 0;
    double res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - r + i) / i;
    }
    return (int)(res + 0.01);
}

/* ===================== DATA STRUCTURES ===================== */

struct bag {
    int cur_sum = 0;
    map<int, int> mp;

    void insert(int x) {
        cur_sum += x;
        mp[x]++;
    }

    void remove(int x) {
        cur_sum -= x;
        mp[x]--;
        if (mp[x] == 0) mp.erase(x);
    }

    int sum() { return cur_sum; }

    int getmax() {
        return mp.empty() ? -1 : prev(mp.end())->first;
    }

    int getdistinct() { return mp.size(); }
};

/* ===================== DEBUG ===================== */
#define deb(a,n) cout<<#a<<" : "; for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
#define debmat(mat,row,col) cout<<#mat<<" :\n"; for(int i=0;i<row;i++){ for(int j=0;j<col;j++) cout<<mat[i][j]<<" "; cout<<endl; }
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
    int idx = str.find(',');
    cout << str.substr(0, idx) << " : " << t << ",";
    dbs(str.substr(idx + 1), s...);
}

template <class T>
void prc(T a, T b) {
    cout << "[";
    for (T i = a; i != b; ++i) {
        if (i != a) cout << ", ";
        cout << *i;
    }
    cout << "]\n";
}
void print(int aa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << aa[i] << " ";
    }
    cout << endl;
}
/* ===================== SOLUTION ===================== */
// optimised version
int dp[505][505][2];
string s[505];
 
int check(int x1, int y1, int x2, int y2) {
    if(x1 > x2 || y1 > y2) return 0;
    if(s[x1][y1] != s[x2][y2]) return 0;
 
    return dp[x1][x2][(x1+y1)%2];
}
 
int solve(int x1, int y1, int x2, int y2) {
    if(x1 > x2 || y1 > y2) return 0;
    if(s[x1][y1] != s[x2][y2]) return 0;
 
    int ans = 0;
    if(((x1==x2) && ((y1 == y2) || (y1 == y2-1))) || 
    ((x1 == x2 - 1) && (y1 == y2))) {
        ans = 1;
    }
    else {
        ans = (ans + check(x1+1, y1, x2-1,y2))%mod;
        ans = (ans + check(x1, y1+1, x2-1,y2))%mod;
        ans = (ans + check(x1+1, y1, x2,y2-1))%mod;
        ans = (ans + check(x1, y1+1, x2,y2-1))%mod;
    }
    return dp[x1][x2][(x1+y1)%2] = ans;
}
 
signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }
        // diameter
        int d = (n + m)/2;
        while(d--) {
            for (int x1 = 0, y1 = d; x1 < n; ++x1, --y1) {
                if(y1 >= 0 && y1 < m) {
                    for (int x2 = n-1; x2 >= 0; --x2) {
                        int y2 = (n - 1 + m - 1) - x2 - d;
                        if(y2 >= 0 && y2 < m) {
                            solve(x1, y1, x2, y2);
                        }
                    }
                }
            }
        }
        cout << check(0, 0, n-1, m-1) << "\n";
    return 0;
}