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
 int n ; cin >> n;
 string a , b ; cin >> a >> b;
 
    vector<int> arr1,arr2;
    for(int i = 0;i<n;i++){
        if(a[i] == '1') arr1.push_back(i+1);
        if(b[i] == '0') arr2.push_back(i+1);
        }
    
    if(arr1.size() == 0) {cout<<"YES"<<endl; return;} 
     else{  int even_arr1 = 0,odd_arr1 = 0,even_arr2 = 0,odd_arr2 = 0;
          for(int i = 0;i<arr1.size();i++){
            if(arr1[i] % 2 == 0 ) even_arr1++;
            else odd_arr1++;
    }
    for(int i = 0;i<arr2.size();i++){
            if(arr2[i] % 2 == 0 ) even_arr2++;
            else odd_arr2++;
    }
   if(odd_arr2>=even_arr1 && even_arr2>=odd_arr1) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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