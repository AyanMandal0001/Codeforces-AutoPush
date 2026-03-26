#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n , m , k ;
int check(int x){
  int noOfele = 0;
  for(int i=1;i<=n;i++){
    // (# <= x) >= k
     noOfele += min(x/i,m);// no of ele satisfies the condition at a particular row
  }
  if(noOfele >= k) return 1;
  else return 0;
}
void solve(){
  cin >> n >> m >>  k;
 
   int l = 1;
   int h = m*n;
   int ans = n ;// or  -1 
   while(l <= h){
    int m = (l+h)/2; // l + (h-l)/2;
    if(check(m)==1){
        ans = m;
        h = m -1;
    }
    else{
        l = m + 1;
    }
   }
   cout << ans << endl;
}
signed main(){
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  // int tt ; cin >> tt ;  while(tt--)
     solve(); 
    return 0;
}