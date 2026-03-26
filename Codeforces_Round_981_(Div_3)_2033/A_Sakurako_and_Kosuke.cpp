#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n ; cin>> n;
  int x=0,turn=0; string s;
   while(x<=n && x>= -n){
        turn += 1;
        if(turn % 2 == 1) {x -= 2*turn-1; s = "Sakurako"; }
        else{ x += 2*turn-1; s = "Kosuke";}
   }
   cout<<s<<endl;
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