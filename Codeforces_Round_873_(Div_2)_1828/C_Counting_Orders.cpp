#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod = 1e9+7;
bool con(const vector<int>& a, const vector<int>& b, int n){
    for(int i=0;i<n;i++){
        if(a[i] <= b[i]) return true;
    }
    return false;
}

void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
   
    // not possible 
    if(con(a,b,n)){
        cout << 0 << endl;
        return;
    }

    // if possible
    int possi = 1;
    int pos = 0;
    for(int i=n-1;i>=0;i--){
        auto it = upper_bound(a.begin(), a.end(), b[i]) - a.begin();  
        int no_of_ele = (n - (int)it) - pos;           
        if(no_of_ele <= 0){                        
            cout << 0 << endl;
            return;
        }
        possi = (possi * (no_of_ele % mod)) % mod;
        pos++;
    }
    cout << possi << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin >> tt;while(tt--) 
    solve();
}