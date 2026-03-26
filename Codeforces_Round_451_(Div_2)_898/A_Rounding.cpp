#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n;
  cin>>n;
  if((n%10)<=4) cout<<n-(n%10)<<endl;
  if((n%10)>=5) cout<<n+10-(n%10)<<endl;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}