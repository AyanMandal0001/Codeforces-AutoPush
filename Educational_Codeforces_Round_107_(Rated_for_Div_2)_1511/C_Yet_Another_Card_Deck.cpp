#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int n , q ;
int arr[1000100];
int queries[1000100];
int colors[51];
int seen[51];
void solve(){
    cin  >> n >> q;
    memset(seen,-1,sizeof(seen));
    for(int i=0;i<n;i++){
        cin >> arr[i];
         if(seen[arr[i]]==-1){
            seen[arr[i]]=1;
            colors[arr[i]]=i;
        }
    }
    for(int i=0;i<q;i++){
        cin >> queries[i];
    }
    for(int i=0;i<q;i++){
       cout<< colors[queries[i]] + 1 <<" ";
       for(int j=0;j<=50;j++){
           if(colors[j]<colors[queries[i]] && j!=queries[i])  colors[j]++;
        }
        colors[queries[i]]=0;
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //int tt; cin>>tt;while(tt--)
         solve();
}