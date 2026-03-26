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
bool isPalindrome(string s){
    int n = s.size();
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}
int elementOccuringOddTimes(string s,int n,int k){
    unordered_map<char,int>mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    int cnt = 0;
    for(auto x : mp){
        if(x.second % 2 != 0){
            cnt++;
        }
    }
    return cnt;
}
void solve(){
 int n , k ;
 cin >> n >> k ;
 string s ; cin >> s ;
 // logic : The no of odd occurences in the string is atmost 1
 // elementOccuringOddTimes(s,n,k) - k <= 1  ? yes : no 
 if( elementOccuringOddTimes(s,n,k) > k+1){
    cout << "NO" << endl;
}
else {
    cout << "YES" << endl;
}
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