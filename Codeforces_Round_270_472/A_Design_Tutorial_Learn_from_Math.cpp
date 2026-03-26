#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
vector<bool> isPrime(1000001, true);
void sieve(){
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= 1000000; i++) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= 1000000; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
// *******************************************************************************//
void solve(){
    sieve();
 int n ; cin >> n ;
 int arr[]={4,6,8,9,10};
 for(int i=0;i<5;i++){
    if(isPrime[n-arr[i]]==false){
        cout << arr[i] << " "<<n-arr[i] << endl;break;
    }
 }

}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   // int tt; cin>>tt;while(tt--)
         solve();
}