#include <bits/stdc++.h>
using namespace std;
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) (x * y)/ gcd(x,y)

int cnt_div(int n) {
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n / i) {
                cnt++;
            }
        }
    }
    return cnt;
}

int cnt_noOfDigits(int num) {
    return log10(num) + 1;
}

void swap(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (abs(a[i] - (i + 1)) != 0) {
            b.push_back(abs(a[i] - (i + 1)));
        }
    }

    int Gcd = b[0];
    for (int i = 1; i < b.size(); i++) {
        Gcd = __gcd(b[i], Gcd);
    }
    cout << Gcd << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
