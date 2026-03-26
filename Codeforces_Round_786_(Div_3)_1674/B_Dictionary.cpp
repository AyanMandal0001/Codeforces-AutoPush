#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
map<string,int> mp;
void precompute(){
  int cnt = 1;
   for(char ch1='a';ch1<='z';ch1++){
    for(char ch2='a';ch2<='z';ch2++){
      if(ch1==ch2) continue;
      else{
        string s = "";s+=ch1;s+=ch2;
        mp[s]=cnt;
         cnt++;
      }
    }
   }
}
void solve(){
    string s; cin >> s;
  cout << mp[s]<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    precompute();
    int tt  ; cin >> tt ; while(tt--)
    solve();
}