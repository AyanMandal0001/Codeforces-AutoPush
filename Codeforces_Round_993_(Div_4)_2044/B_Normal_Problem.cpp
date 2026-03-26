#include <bits/stdc++.h>
using namespace std;
void solve(){
   string s ;cin>>s;
   int n = s.size();
   string ans = " ";
   for(int i=n-1;i>=0;i--){
     if(s[i]=='p') ans+="q";
   else  if(s[i]=='q') ans +="p";
     else ans +='w';
   }
   cout<<ans<<endl;
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