#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
   int n ; cin >> n;
   vector<int>arr(n);
   vector<pair<int,int>> v;
   for(int i=0;i<n;i++){
     int x ; cin >> x;
     arr[i]=x;
     v.emplace_back(x,i);
   }
  //  vector<int>b(arr);
   sort(v.begin(),v.end());
   int vec[n+1]={0};
   // assuming businessman stays at  xi = 0   bcz there can be many answers we can print  any of them
   int left = 0,right = 0;
  for(int i=n-1;i>=0;i--){
    if( abs(left-1) >= abs(right+1)) {
        right = right+1;
       vec[v[i].second+1] += right;
    }
    else{ // abs(left-1) < abs(right+1)
        left = left-1;
        vec[v[i].second+1] += left;
    }
  }
  int tot = 0;
   for(int i=1;i<n+1;i++){
    tot += 2*abs(vec[i])*arr[i-1];
   }
   cout<<tot<<endl;
   // now print the resultant arr v
  //  for(int i=0;i<n+1;i++){
  //   cout <<v[i]<<" ";
  //  }
  
  for(int i=0;i<n+1;i++){
    cout<<vec[i]<<" ";
  }
cout << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}

// 14
// 1 3 0 2
// 78
// 2 0 1 3 4 5
// 18
// 2 5 0 4 1 3
// 0
// 0 1