#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int NoOfElements(int x) {
    if (x <= 1) return 1;
    return 2 * NoOfElements(x / 2) + 1;
}

int rec0(int x,int l ,int r ,int cur) {
    if (x <= 1) {
        cur++;
        if (cur >= l && cur <= r) {
            return x; 
        }
        return 0;
    }

    int left = NoOfElements(x/2);
    int mid = 1+left;   
    int right = mid+1;   

    int ans = 0LL;
 
    if (l <=  left) {
        ans += rec0(x / 2, l,min(r,left),0LL);
    }
   
    if (mid >= l && mid <= r) {
        ans += x % 2;
    }
    
    if (r >= right) {
        ans += rec0(x / 2,max(1LL,l-mid),r-mid,0LL);
    }
    return ans;
}

void solve() {
    int n , l ,r ;
    cin >> n >> l >> r;
    cout << rec0(n,l,r,0) << endl;
}

signed main() { 
//  int tt; cin >> tt ; while(tt--) 
       solve();
}