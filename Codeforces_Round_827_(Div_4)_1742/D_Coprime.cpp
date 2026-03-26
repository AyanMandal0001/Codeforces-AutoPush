#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod = 1e9+7;
int n ;
int arr[1000100];
vector<vector<int>> v(1001);

int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
void pre(){
 for(int i=1;i<=1000;i++){
    for(int j=1;j<=1000;j++){
     if(gcd(i,j)==1) v[i].push_back(j);
  }
 }
}

void solve(){
   cin >> n;
   vector<int> ind(1001,-1);
   vector<int> freq(1001,0);
  for(int i=0;i<n;i++){
    cin >> arr[i];
    ind[arr[i]] = i;
    freq[arr[i]]++;
  }
  
  int maxi = -1;
  for(int i=0;i<n;i++){
    for(auto p:v[arr[i]]){
        if(freq[p]!=0 ) maxi = max(maxi,ind[arr[i]]+1+ind[p]+1);
    }
  }
  cout << maxi << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
          pre();
    int tt; cin>>tt;while(tt--)
         solve();
}
