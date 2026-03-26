#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n,m;
  cin>>n>>m;
  if(m > 1) cout<< (m-1) * n <<endl;
  else if(m==1) cout<<n-1<<endl;
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