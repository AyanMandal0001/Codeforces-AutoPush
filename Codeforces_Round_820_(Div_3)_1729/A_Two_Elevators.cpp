#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,c;
    cin>>a>>b>>c;
    if(abs(a-1) > abs(b-c)+abs(c-1)) cout<< 2 << endl;
    else if(abs(a-1) < abs(b-c)+abs(c-1)) cout << 1 << endl;
    else cout << 3 << endl;
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