#include <bits/stdc++.h>
using namespace std;

#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) (x * y) / gcd(x,y)

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

void solve() {
    int n, k; 
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    sort(a.begin(), a.end());
    
    int cnt = 0;
    int left = 0, right = n - 1;
    
   
    while (left < right) {
        int sum = a[left] + a[right];
        if (sum == k) {
            cnt++;
            left++;
            right--;
        } else if (sum < k) {
            left++;
        } else {
            right--;
        }
    }

    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
