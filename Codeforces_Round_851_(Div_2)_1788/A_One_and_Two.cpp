#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int cnt=0;
    vector<int> a(n), b; // Initialize vector 'a' with size 'n'
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]==2){ 
            cnt++;
            b.push_back(i);
        }
    }
    if(cnt==0) cout<<"1"<<endl;
    else if(cnt%2==1) cout<< "-1"<<endl;
    else if(cnt%2==0) cout<<b[(cnt/2)-1]+1<<endl;
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