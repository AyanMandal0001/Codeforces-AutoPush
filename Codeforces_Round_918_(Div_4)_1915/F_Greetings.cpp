#include <bits/stdc++.h>
#define ll long long

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

// Ordered set supporting order statistics (order_of_key, find_by_order)
using Oset = tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;


void solve(){
   int n;
    cin >> n;
    vector<pair<int,int>> v(n); 
    for (int i=0;i<n;i++) {
       cin>>v[i].first>>v[i].second;
    }  

    sort(v.begin(), v.end());

    Oset st;         
    ll ans = 0; 
 // Logic: summation of (cur interval is contained in how many intervals )
    for (int i=0; i<n;i++) {
        // as we have processed i elements b4 coming to cur index for 0-based indexing  so  st.size()==i
        ans += i - st.order_of_key(v[i].second);
        st.insert(v[i].second); 
    }
    cout <<ans<<endl;
}
signed main() {

		ios::sync_with_stdio(0); 
		cin.tie(0);cout.tie(0);

		int t=1;
		cin>>t;
		while (t--) 
        solve();
}
