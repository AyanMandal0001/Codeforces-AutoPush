#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int n , m ;
int arr[100100],brr[100100];

int maxi = -1;
int check(int x){
    for(int i=0;i<n;i++){
      auto it = lower_bound(brr,brr+m,arr[i])-brr;
      if(it < m){
         int left = brr[it]-x;
         int right = brr[it]+x;
        if(arr[i] < left || arr[i] > right ) {
            if(it==0) return 0;// no left index possible
            left = brr[it-1]-x;
            right =brr[it-1]+x;
            if(arr[i] < left || arr[i] > right) return 0;
        }
      }
      else{
         int left = brr[m-1]-x;
         int right = brr[m-1]+x;
         if(arr[i] < left || arr[i] > right ) return 0;
      }  
    }
     return 1;
}
void solve(){
  cin >> n >> m;
  for(int i=0;i<n;i++){
    cin >> arr[i]; 
  }
  for(int i=0;i<m;i++){
    cin >> brr[i]; 
  }
  if(n==m && n==1){ cout<< abs(arr[0]-brr[0]); return;}
  // bs on r(distance)
  maxi = max(maxi,abs(arr[n-1]-brr[0]));
  maxi = max(maxi,abs(arr[0]-brr[0]));
  int l = 0;
  int h = maxi;// 1 tower can provide network to all cities
  int ans = 1;
  while(l<=h){
    int mid = (l+h)/2;
    if(check(mid)){
        ans = mid;
        h = mid - 1;
    }
    else{
        l = mid + 1;
    }
  }
  cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  //  int tt; cin>>tt;while(tt--)
         solve();
}