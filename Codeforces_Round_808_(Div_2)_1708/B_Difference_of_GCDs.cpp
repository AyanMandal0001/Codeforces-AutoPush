#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
    int n , l , r; cin >> n >> l >> r;
        vector<int> arr;    
        for(int i=1;i<=n;i++){
            int val = ((l+i-1)/i)*i; 
          if(val>r)   {
             cout<<"NO"<<endl;
            return; 
        }
          else{
            arr.push_back(val);
          }
        } 
         cout<<"YES"<<endl;   
        for(auto v:arr){
        cout<<v<<" ";
       }
       cout<<endl;   
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}