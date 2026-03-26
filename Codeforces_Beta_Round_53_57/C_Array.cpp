#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
// finds a ^(m-2)
long long modI(long long a, long long m) {
    long long res = 1;
    long long p = m - 2;
    while (p) {
        if (p % 2) res = (res * a) % m;
        a = (a * a) % m;
        p /= 2;
    }
    return res;
}
int main() {
    long long n;
    cin >> n;  
    long long num = 1, den = 1;
    for (int i = 1; i < n; i++) {
        num = (num * (2 * n - i)) % MOD;
        den = (den * i) % MOD;
    }  
    // ans =  2 *  (2n-1)C(n) - n 
    // ans = (2*(num / den) - n ) % mod
    long long result = (2 * ((num * modI(den, MOD)) % MOD) - n + MOD) % MOD;
    cout << result << "\n";    
    return 0;
}