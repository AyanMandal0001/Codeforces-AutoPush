#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

vector<ll> value(31, 0);
void pre(){
    value[0] = 1;
    ll prod = 2;
    for(ll i = 1; i <= 30; i++){
        value[i] = prod;
        prod *= 2;
    }
  }
void solve(){
    ll n, q; 
    cin >> n >> q;
    vector<ll> arr(n);
    vector<ll> x(q);
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(ll j = 0; j < q; j++){
        cin >> x[j];
    }    
    ll final = 31;  
    for(ll query = 0; query < q; query++){
        ll cur_val = x[query];
        if(cur_val >= final) continue;
        final = cur_val;
        ll d = value[cur_val];
        ll add_val = value[cur_val - 1];   
        for(ll j = 0; j < n; j++){
            if(arr[j] % d == 0){
                arr[j] += add_val;
       }
        }
      }
    for(ll i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    pre(); ll tt; cin >> tt;while(tt--) 
    solve();
}
