#include <bits/stdc++.h>
using namespace std;

#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) (x * y)/ gcd(x,y)

long long cnt_div(long long n) {
    long long cnt = 0;
    for(long long i=1; i*i<=n; i++) {
        if(n % i == 0) {
            cnt++;
            if(i != n/i) {
                cnt++;
            }
        }
    }
    return cnt;
}

long long cnt_noOfDigits(long long num) {
    return floor(log10(num) + 1);
}

void swap(long long &a, long long &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

long long countPrimes(long long n) {
    // count primes lesser than n
    if (n <= 2) return 0;
    vector<bool> isPrime(n, true);
    
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

// *******************************************************************************//
long long noOfOperations(vector<long long> &a, long long n) {
    long long cnt = 0;
    return cnt;
}

long long FrequencyOfmostFrequentElement(vector<long long> &a, long long n) {
    // Using map is inefficient when we can use a frequency array
    // But since we don't know the range of elements, we'll optimize the map usage
    map<long long, long long> mp;
    
    long long maxFreq = 0;
    for(long long i = 0; i < n; i++) { // O(n)
        mp[a[i]]++;// O(log n)
        maxFreq = max(maxFreq, mp[a[i]]);
    }   
    return maxFreq;
}

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    // case  1: all elements are same
    long long freq = FrequencyOfmostFrequentElement(a, n);
    if (freq == n) {
        cout << 0 << '\n';
        return;
    }
      
    long long op = 0;
    while (freq < n) { // log2(n)
        op++;
        if( 2* freq <= n){  
            op += freq;
            freq = 2 * freq;
            }
        else{      
            op += (n - freq);
            freq = n;
        }   
    } 
    cout << op << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}


