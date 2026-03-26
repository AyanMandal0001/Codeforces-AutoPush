#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// *******************************************************************************//
bool check(string &s){
    int n = s.size();
    int cnt1=0,cnt2=0;
    string s1="ab",s2="ba";
    for(int i=0;i<n;i++){
        if(s.substr(i,2) == s1){
           cnt1++;
        }
          if(s.substr(i,2) == s2){
               cnt2++;
          }
     }
    return (cnt1==cnt2 ? true : false);
}
void solve(){
   string s ; cin >> s;
   int n = s.size();

   if(check(s)){
    cout<<s<<endl;
   }
   else{
   s[0] =s[n-1];
   cout<<s<<endl;
   }
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt=1;
    cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}