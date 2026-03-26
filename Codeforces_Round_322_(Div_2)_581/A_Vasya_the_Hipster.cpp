#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a,b;
  cin>>a>>b;
  cout<<min(a,b)<<" "<<(a+b-2*min(a,b))/2<<endl;
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