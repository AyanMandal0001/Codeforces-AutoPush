#include <bits/stdc++.h>
using namespace std;
void solve(){
int n ,k; cin>>n>>k;
   
    int turns = 0;
   while(n!=0){
    if(turns == 0 || turns % k == 0)  n --;
    turns++;
   }
   cout<<turns<<endl;
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