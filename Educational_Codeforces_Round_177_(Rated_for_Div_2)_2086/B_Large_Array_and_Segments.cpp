#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// instead of using &&  use and
// instead of using ||  use or
 // printf exists in c++
 //  && == and ,  || == or 
 // arr[i] = i[arr]

#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) (x * y)/ gcd(x,y)
long long cnt_div(long long n){
  long long cnt = 0;
for(long long i=1;i<=sqrt(n);i++){
    if(n % i == 0){
  cnt ++;
if(i != n/i){
  cnt++;
 }
 }
 }
return cnt;
 }
long long cnt_noOfDigits(long long num){
return log10(num)+1 ;
}
void swap(long long &a,long long &b){
 // a = a + b -(b=a);
 a = a ^ b;
 b = a ^ b;
 a = a ^ b;
}
long long countPrimes(long long n) {
    // count primes lesser than n
    if (n <= 2) return 0;
    vector<bool>isPrime(n, true);

    isPrime[0] = isPrime[1] = false;

    // Using Sieve of Eratosthenes
    for (long long i = 2; i * i < n; i++) {

        if (isPrime[i]) {
            for (long long j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    long long count = 0;
    for (long long i = 2; i < n; i++) {
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
   long long n , k , x ; cin >> n >> k >> x;
   vector<long long>arr(n);
   long long sum0 = 0;
   for (long long i = 0; i < n; i++){cin>>arr[i];sum0 += arr[i];}

   long long possible = n * k ;//no of possible locations of l

   long long cnt = 0;
   long long sum = 0;
   long long possible_max_sum = k * sum0;
  
   if( possible_max_sum > x){
    // edge cases
       if(x % sum0 == 0) {cnt += (x/sum0 - 1)*n;x=sum0;} 
       else{cnt += (x/sum0)*n;
        x = x % sum0;}

     bool flag = false;
     int i = n-1;
     while(flag==false and i>= 0){
        sum += arr[i];
        if(sum < x) {cnt++;i--;}
        else flag = true;
     }
       cout<< possible-cnt<<endl;
   }
   else if(possible_max_sum == x){
    cout<<1<<endl;
    return;
   }
   else {
    cout<<0<<endl;
    return;
   }
   
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long long t=1;
    cin>>t;
    for (long long i = 0; i < t; i++)
    {
        solve();
    }
}