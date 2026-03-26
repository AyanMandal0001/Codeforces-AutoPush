#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
ll mod = 1e9+7;
void solve(){
 ll n; string s ; cin >>n>>s;
  set<string>st1,st2,st3;
  for(ll i=0;i<n;i++){
    st1.insert(s.substr(i,1));
   if(i+1<n) st2.insert(s.substr(i,2));
   if(i+2<n) st3.insert(s.substr(i,3));
  }
  if(st1.size()<26){
     for(char ch='a';ch<='z';ch++){
        string s="";
        s += ch ;
        if(!st1.count(s)){
            cout << s << endl;
            return;
        }
     }
  }
  else if(st2.size()<26*26){
      for(char ch1='a';ch1<='z';ch1++){
       for(char ch2='a';ch2<='z';ch2++){
         string s ="";
        s += ch1 ; s+= ch2;
          if(!st2.count(s)){
            cout << s << endl;
             return;
          }
       }
     }  
  }
  else{
         for(char ch1='a';ch1<='z';ch1++){
       for(char ch2='a';ch2<='z';ch2++){
        for(char ch3='a';ch3<='z';ch3++){
              string s ="";
            s += ch1 ; s+= ch2; s += ch3;
              if(!st3.count(s)){
              cout << s << endl;
              return;
            }
          }
       }
     }
    
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}