#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
 ll n; cin >> n;
 vector<ll> arr(n),unique(n);
 for(ll i=0;i<n;i++){
   cin >> arr[i];
   if(i==0) unique[i]=1;
   else{
       if(arr[i]!=arr[i-1]) unique[i]=1;
   }
 }
 for(ll i=1;i<n;i++){
  unique[i] += unique[i-1];
 }
 ll q; cin >> q;
  vector<pair<ll,ll>> queries(q);
 for(ll i=0;i<q;i++){
   cin >> queries[i].first >> queries[i].second;
}

  for(ll i=0;i<q;i++){
    ll l = queries[i].first-1;
    ll r = queries[i].second-1;
     ll val=unique[l];
     auto ind=upper_bound(unique.begin(),unique.end(),val)-unique.begin();
  if((ll)ind!=n && ind<=r)  cout << l+1<<" "<< ind+1 <<endl;
  else cout <<-1<<" "<<-1<<endl;
  }
  cout<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t=1; cin>>t;
    for (ll i = 0; i < t; i++)
    {
        solve();
    }
}