#include <bits/stdc++.h>
using namespace std;

/*============= Standard Macros =================*/
#define int long long
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

int n,q, k;
int a, b, c;
string s;
bool dp1[5001][5001];
int dp[5001][5001];
// int rec1(int i,int j){
//     if(i>=j) return 1;
//     if(dp1[i][j]!=-1) return dp1[i][j];
//     int ans=0;
//     if(s[i]==s[j] && rec1(i+1,j-1)) ans=1;
//     return dp1[i][j]=ans;
// }
// int rec(int i,int j){
//      if(i>j) return 0;
//      if(i==j) return 1;
//     if(dp[i][j]!=-1) return dp[i][j];
//     int ans=0;
//     if(dp1[i][j]) ans+=1;
//     ans+=rec(i+1,j)+rec(i,j-1);
//     ans-= rec(i+1,j-1);
//     return dp[i][j]=ans;
// }
void solve() {
    cin >> s; n = s.length();   
    memset(dp1,0,sizeof(dp1));
    memset(dp,0,sizeof(dp));   
    for (int i=0;i<n;i++) {
        dp1[i][i]=1; dp[i][i]=1;
    }   
    for (int i=0;i<n-1;i++) {
        if (s[i]==s[i+1]) {
            dp1[i][i+1]=1;
        }
        dp[i][i+1]=dp[i][i]+dp[i+1][i+1]+dp1[i][i+1];
    }
    for (int len=3;len<=n;len++) {
        for (int i=0;i<=n-len;i++) {
            int j=i+len -1;       
            if (s[i] ==s[j] && dp1[i+1][j-1]) {
                dp1[i][j] = 1;
            }             
            dp[i][j]=dp1[i][j]+dp[i+1][j]+dp[i][j-1]
            -dp[i+1][j-1];
        }
    }   
    cin >>q;
    for (int i=0;i<q;i++) {
        int li,ri;
        cin >>li>>ri;
        li--;ri--; 
        cout <<dp[li][ri]<< endl;
    }
}
/* ===================== MAIN ===================== */

signed main() {
    faster();
    int tt = 1;
   // cin >> tt;
    while (tt--) solve();
    return 0;
}