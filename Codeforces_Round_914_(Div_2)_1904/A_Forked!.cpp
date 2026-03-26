#include <bits/stdc++.h>
using namespace std;
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) (x * y)/ gcd(x,y)
int cnt_div(int n){
  int cnt = 0;
for(int i=1;i<=sqrt(n);i++){
    if(n % i == 0){
  cnt ++;
if(i != n/i){
  cnt++;
 }
 }
 }
return cnt;
 }
int cnt_noOfDigits(int num){
return log10(num)+1 ;
}
void swap(int &a,int &b){
 // a = a + b -(b=a);
 a = a ^ b;
 b = a ^ b;
 a = a ^ b;
}
int countPrimes(int n) {
    // count primes lesser than n
    if (n <= 2) return 0;
    vector<bool>isPrime(n, true);

    isPrime[0] = isPrime[1] = false;

    // Using Sieve of Eratosthenes
    for (int i = 2; i * i < n; i++) {

        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    return count;
}
// *******************************************************************************//
void solve(){
 long long a , b, x_K,y_K, x_Q, y_Q; 
 cin >> a >> b >> x_K >> y_K >> x_Q >> y_Q;
 long long dx[]={a,a,-a,-a,b,b,-b,-b};
  long long dy[]={-b,b,b,-b,-a,a,-a,a};
  set<pair<long long, long long>> kingSet,QueenSet;
  
  for (int i = 0; i < 8; i++) {
   kingSet.insert({x_K + dx[i], y_K + dy[i]});
   QueenSet.insert({x_Q + dx[i], y_Q + dy[i]});
  }

    long long ans = 0;
    for (auto q : QueenSet) {
        if (kingSet.find(q) != kingSet.end()) {
            ans++;
        }
    }
    cout << ans << endl;
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
