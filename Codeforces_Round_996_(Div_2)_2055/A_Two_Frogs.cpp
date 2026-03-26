#include <bits/stdc++.h>
using namespace std;

 bool func(int n,int a,int b){
     if(abs(b-a)>=2 && (abs(b-a)-1)%2==1) return true;
    else if(abs(b-a)>=2 && (abs(b-a)-1)%2==0) return false;
    else if(abs(b-a)==1) return false;
    else return  false;
 }
void solve(){
   int n,a,b; cin>>n>>a>>b;
   if(func(n,a,b)==1) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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