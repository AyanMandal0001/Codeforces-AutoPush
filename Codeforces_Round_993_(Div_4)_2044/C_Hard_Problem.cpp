#include <bits/stdc++.h>
using namespace std;
void solve(){
   int m,a,b,c; cin>>m>>a>>b>>c;
   int monkeys = 0;
   monkeys += min(min(a,m)+min(b,m)+c,2*m);
  cout<<monkeys<<endl;
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