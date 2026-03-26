#include <bits/stdc++.h>
using namespace std;

void solve(){
 int a,b,c;
 cin>>a>>b>>c;
 if(c%2==0){
   if(a>b) cout<<"First"<<endl;
   else cout<<"Second"<<endl;
 }
 else{
      if(b>a) cout<<"Second"<<endl;
      else cout<<"First"<<endl;
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