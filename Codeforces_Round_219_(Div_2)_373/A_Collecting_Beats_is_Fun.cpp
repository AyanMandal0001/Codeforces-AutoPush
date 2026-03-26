#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
int freq[10]; // initialize frequency array to 0
void solve(){
    int  k ; cin >> k;
    
    string s[4];
    for(int i=0;i<4;i++){
       cin >> s[i];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(isdigit(s[i][j]))  freq[s[i][j]-'0']++;
           }
    }

    for(int i=0;i<10;i++){
        if(freq[i] > 2*k){
            cout << "NO" << endl;
            return;
        }
    }
    cout<< "YES" << endl;
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt=1;
    // cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}