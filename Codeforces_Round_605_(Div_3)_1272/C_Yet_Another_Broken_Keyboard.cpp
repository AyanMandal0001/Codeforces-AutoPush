#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long

int freq[26];

void solve(){
   int n , k ;  string s ;       cin >> n >> k >> s ;
   for(int i=0;i<k;i++){
     char ch ; cin >> ch;
     freq[ch-'a']++;
   }
    
   int cnt = 0;
   vector<int> v;
   for(int i=0;i<n;i++){
    if(freq[s[i]-'a']!=0){
     cnt++;
    }
    else{
       if(cnt!=0) v.push_back(cnt);
       cnt = 0;
    }
   }
   v.push_back(cnt);

   int ans = 0;
   for(int i=0;i<v.size();i++){
      ans += v[i]*(v[i]+1)/2;
   }
   cout << ans << nl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   // int tt; cin>>tt;while(tt--)
         solve();
}