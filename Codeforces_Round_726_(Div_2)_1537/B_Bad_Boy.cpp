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
    int n , m , i , j; cin >> n >> m >> i >> j;
    int x1 = 0,y1=0,x2=0,y2=0;
    if(i != 1 and i != n and j != 1 and j != m){
        x1 = 1 ;
        x2 = n;
        y1 = 1;
        y2 = m;
    }
   else if( (i==1 or i == n) and j != 1 and j != m){
        x1 = n+1-i;
        x2 = n+1-i;
        y1 = 1;
        y2 = m;
   }
   else if(i != 1 and i != n and (j==1 or j == m)){
        x1 = 1;
        x2 = n;
        y1 = m+1-j;
        y2 = m+1-j;
   }
   else { // ((i== 1 or i==n) and (j==1 or j==m))
        x1 = n+1-i;
        x2 = i;
        y1 = m+1-j;
        y2 = m+1-j;
   }
    cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt=1;
    cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}