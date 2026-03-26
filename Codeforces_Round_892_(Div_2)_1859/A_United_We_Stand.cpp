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
bool isSame(vector<int>& arr){
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            return false;
        }
    }
    return true;
}
void solve(){
  int n ; cin>> n;
  vector<int>arr(n);
  int mini = 1e9+7;
  for (int i = 0; i < n; i++) {  cin>>arr[i]; mini=min(mini,arr[i]);}
  if( isSame(arr)){cout<<-1<<endl;return;}
  vector<int>arrb,arrc;
    for (int i = 0; i < n; i++) {
        if(arr[i] == mini) arrb.push_back(arr[i]);
        else arrc.push_back(arr[i]);
    }
    cout<<arrb.size()<<" "<<arrc.size()<<endl;
    for (int i = 0; i < arrb.size(); i++) {
        cout<<arrb[i]<<" ";
    } cout <<endl;
    for (int i = 0; i < arrc.size(); i++) {
        cout<<arrc[i]<<" ";
    } cout <<endl;
  return;
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