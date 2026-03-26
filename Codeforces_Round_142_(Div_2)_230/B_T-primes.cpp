#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int MAX = 1e6 + 5;
vector<bool> isPrime(MAX, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void solve() {
    set<int> st;
    for(int i=0;i<isPrime.size();i++){
       if (isPrime[i] == true) st.insert(i*i); ;
    }
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        if (x == 1) {
            cout << "NO" << '\n';
              
        }
        else{
               if (st.find(x) != st.end()) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
        }    
    }
}

signed main() {
     sieve();
    solve();
    return 0;
}