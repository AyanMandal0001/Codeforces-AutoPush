#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod = 1e9+7;
void solve(){
 int n ; cin >> n;
 int ar[n],br[n],p[n];
 for(int i=0;i<n;i++){
    cin >> ar[i];
    br[i]=ar[i];
 }
 sort(br,br+n);
  p[0]=br[0];
  for(int i=1;i<n;i++) p[i]=p[i-1]+br[i];
  for(int i=0;i<n;i++){
    int it1 = lower_bound(br,br+n,ar[i])-br;
     while(true){
      int it2 =upper_bound(br,br+n,p[it1])-br-1;
      if(it2==it1) break;
      else it1=it2;
     }
     cout << it1 << " ";// itself excluded
  }
 cout << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}