#include <bits/stdc++.h>
using namespace std;

int func(int i,int j,string s,int n,int cnt){
    if(i>=j) return cnt;
    if(( s[i]=='0'&&s[j]=='1')||(s[i]=='1'&&s[j]=='0')) return func(i+1,j-1,s,n,cnt-2);
    return cnt;
}
void solve(){
  int n; string s;  cin>>n>>s;
  cout<<func(0,n-1,s,n,n)<<endl;
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