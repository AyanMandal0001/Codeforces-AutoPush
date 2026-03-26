#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
bool check(vector<int> &b){
  int n = b.size();
  if(n==2) return true;
  int cnt = 0;
  for(int i=0;i<n;i++){
    if(b[i]==0) cnt++;   
    }
 if(cnt == 1 && b[n-1]==0) return true;
 return false;
}
void solve(){
  string s; cin >> s;
  int n = s.size();
  vector<int> b;
  int cnt = 0;
  for(int i=0;i<n;i++){
    if(s[i] == '('){
      cnt++;
    }
    else{ cnt--; }     
        b.push_back(cnt);  
    }
 if(check(b)){
   cout<<"NO"<<endl;
 }
  else{
    cout<<"YES"<<endl;
  }
}
signed main(){
    int tt; cin>>tt;while(tt--)
         solve();
}