#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// instead of using &&  use and
// instead of using ||  use or
 // printf exists in c++
 //  && == and ,  || == or 
 // arr[i] = i[arr]
#define ll long long
// Always create different array for prefixSum
// always use {} for if else bcz it is good practice

#define lcm(x,y) (x * y)/ gcd(x,y)
ll cnt_div(ll n){
  ll cnt = 0;
for(ll i=1;i<=sqrt(n);i++){
    if(n % i == 0){
  cnt ++;
if(i != n/i){
  cnt++;
 }
 }
 }
return cnt;
 }
ll cnt_noOfDigits(ll num){
return log10(num)+1 ;
}
void swap(ll &a,ll &b){
 // a = a + b -(b=a);
 a = a ^ b;
 b = a ^ b;
 a = a ^ b;
}
ll countPrimes(ll n) {
    // count primes lesser than n
    if (n <= 2) return 0;
    vector<bool>isPrime(n, true);

    isPrime[0] = isPrime[1] = false;

    // Using Sieve of Eratosthenes
    for (ll i = 2; i * i < n; i++) {

        if (isPrime[i]) {
            for (ll j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    ll count = 0;
    for (ll i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    return count;
}
long long FrequencyOfmostFrequentElement(vector<long long> &a, long long n) {
    // Using map is inefficient when we can use a frequency array
    // But since we don't know the range of elements, we'll optimize the map usage
    map<long long, long long> mp;

    long long maxFreq = 0;
    for(long long i = 0; i < n; i++) { // O(n)
        mp[a[i]]++; // O(log n)
        maxFreq = max(maxFreq, mp[a[i]]);
    }

    return maxFreq;
}
// *******************************************************************************//
void solve(){
    ll a , b ; cin >> a >> b;
    ll steps =  0 ;
    if(a == b){
        cout<<0<<" "<<0<<endl;
        return;
    }
    else if(a != b and min(a,b)==0){
        cout<<max(a,b)<<" "<<0<<endl;
        return;
    }
 else{
        ll excitement = abs(a-b);
        ll maxi = max(a,b);
        int curr_gcd = __gcd(a,b); 
        // increase a,b by 1 multiple times or decrease a,b by 1 multiple times to make them equal
        ll moves = min( excitement - (maxi % excitement),maxi%excitement); 
     if(excitement == 1 or curr_gcd >= excitement){
        cout<<curr_gcd<<" "<<0<<endl;
        return;
             }
     else {
          cout<<excitement<<" "<<moves<<endl;
             return;
         }
     }
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll tt=1;
    cin>>tt;
    for (ll i = 0; i < tt; i++)
    {
        solve();
    }
}