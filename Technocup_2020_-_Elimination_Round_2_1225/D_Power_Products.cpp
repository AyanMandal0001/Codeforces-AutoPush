#include<bits/stdc++.h>
using namespace std;

#define MAXN 1000000
int spf[1000100];

#define int long long

void pre(){
    for(int i=0;i<=MAXN;i++){
        spf[i] = i;
    }
    for(int i=2;i<=MAXN;i++){
        if(spf[i]==i){
            for(int j=2*i;j<=MAXN;j+=i){
                if(spf[j]==j){
                    spf[j] = i;
                }
            }
        }
    }
}

map<int,int> get_factor_map(int x){
    map<int,int> mp;
    while(x!=1){
        mp[spf[x]]++;
        x/=spf[x];
    }
    return mp;
}


pair<int,int> reduced_and_complement(int x,int k){
    auto mp = get_factor_map(x); // arr[i]
    int red = 1;
    int comp = 1;
    for(auto v:mp){
        if(v.second%k==0){
        }
        else{
             for(int i=0;i<v.second%k;i++){
                red *= v.first;
               }
             for(int i=0;i<k-v.second%k;i++){
                comp *= v.first;
             }

        }
    }
    return {red,comp};
}

void solve(){
    int n,k;  
    cin>>n>>k;
    int arr[n];
    int ans = 0;
    map<int,int> freq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        auto temp = reduced_and_complement(arr[i],k);
        ans += freq[temp.second];
        freq[temp.first]++;
    }
    cout<<ans<<endl;
}

signed main(){
    int t=1;
    pre();
    // cin>>t;
    while(t--){
        solve();
    }
}