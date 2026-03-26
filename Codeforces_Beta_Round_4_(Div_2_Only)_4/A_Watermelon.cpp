#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main(){
     
    int w ; cin >> w;
    //In C++, the expression n & 1 checks if the least significant bit of the integer n is set, which effectively determines if n is odd or even. If n is odd, the least significant bit is 1, and the expression evaluates to true (non-zero). If n is even, the least significant bit is 0, and the expression evaluates to false (zero).
    if( w & 1) {
        cout << "NO" << endl;
    }
    else {
        if(w > 2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}