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
  ll  n ; cin >> n;
  if(n % 2 != 0 or n < 4){ cout << -1 << endl;return; }
    else{  n = n/2; 
        if( n % 6 == 0) cout<< n/3<<" "<<n/2<<endl;
        else if( n % 2 ==0 and n % 3 != 0){
            if( n % 3 == 1){cout<<(n-4)/3+2<<" "<<n/2<<endl;}
            else { // means remainder is 2;
                cout<<(n-2)/3+1<<" "<<n/2<<endl;
            }
        }
        else if( n % 3== 0 and n % 2 != 0){
            cout<<n/3<<" "<<(n-3)/2+1<<endl;        }
     else{// means n % 2 != 0 and n % 3 != 0;
           if( n % 3 == 1  and  n  % 2 == 1 ){ // means n % 3 ==1 and n  % 2 == 1
             cout<<(n-4)/3+2<<" "<<(n-3)/2+1<<endl;
           }
           else if(n % 3 ==2 and n  % 2 == 1) { // means n % 3 ==2 and n  % 2 == 1
             cout<<(n-2)/3+1<<" "<<(n-3)/2+1<<endl;
           }
           else cout<<-1<<endl;
     }
    }
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