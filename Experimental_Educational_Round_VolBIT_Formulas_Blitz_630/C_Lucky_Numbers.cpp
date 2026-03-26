#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod = 1e9+7;
int binpow(int a,int b){
    if(b==0) return 1;
    if(b%2){
        return a*binpow(a,b-1);
    }
    else{
        int temp = binpow(a,b/2);
        return temp*temp;
    }
}
// *******************************************************************************//
void solve(){
 int n ; cin >> n;
 int ans = binpow(2,n+1)-2;
 cout << ans <<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   // int tt; cin>>tt;while(tt--)
         solve();
}