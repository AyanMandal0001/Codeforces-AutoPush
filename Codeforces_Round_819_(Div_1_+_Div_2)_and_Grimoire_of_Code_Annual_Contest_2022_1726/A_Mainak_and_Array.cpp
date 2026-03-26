#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
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
void swap(int &arr,int &b){
 // arr = arr + b -(b=arr);
 arr = arr ^ b;
 b = arr ^ b;
 arr = arr ^ b;
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
long long FrequencyOfmostFrequentElement(vector<long long> &arr, long long n) {
    // Using map is inefficient when we can use arr frequency array
    // But since we don't know the range of elements, we'll optimize the map usage
    map<long long, long long> mp;

    long long maxFreq = 0;
    for(long long i = 0; i < n; i++) { // O(n)
        mp[arr[i]]++; // O(log n)
        maxFreq = max(maxFreq, mp[arr[i]]);
    }

    return maxFreq;
}
// *******************************************************************************//
void solve(){
   int  n; cin >> n ; 
   vector<int>arr(n);
   for (int i = 0; i < n; i++) {
    cin >> arr[i]; 
   }
   
   // maximize an - a1

   int ans = 0;

   // case 1 :  keeping a1 's position same
   for(int i=1;i<n;i++){
    ans = max(ans,arr[i]-arr[0]);
   }

   // case 2 : keeping an 's position same
   for(int i=0;i<n-1;i++){
    ans = max(ans,arr[n-1]-arr[i]);
   }
   // case 3 : keeping a1 and an 's position same or taking the whole array as subsegment
   for(int i=0;i<n-1;i++){
    ans = max(ans,arr[i]-arr[i+1]);
   }
    cout<< ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}