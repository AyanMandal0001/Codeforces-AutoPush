#include <bits/stdc++.h>
using namespace std;

long long calculateFriendshipPower(long long n) {
    long long sum = 0;
    while (n >= 1) {
        sum += n;
        n /= 2;  
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        cout << calculateFriendshipPower(n) << "\n";
    }
    
    return 0;
}