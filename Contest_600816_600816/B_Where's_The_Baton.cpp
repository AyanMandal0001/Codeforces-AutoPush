#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int n = s.size();
    string s1 ="baton";
    int i=0,j=0;
    while(i < n){
     if(s[i]==s1[j]){
        j++;
        i++;
     }
     else i++;
    }
    if(j==5) cout << "Yes" << endl;
    else cout << "No" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}