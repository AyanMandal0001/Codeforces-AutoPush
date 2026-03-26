#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  for (char c = 'a'; c <='h'; c++)  {
    if(s[0]!=c) cout<<c<<s[1]<<endl;   
  }
  for (int i = 1; i < 9; i++)
  {
    if(s[1]-'0'!=i) cout<<s[0]<<i<<endl;//Imp line    else continue;
  }
  
  
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}