#include <bits/stdc++.h>
using namespace std;

int compare(string x1, long long p1, string x2, long long p2) {
    // Calculate the effective lengths of the numbers
    long long len1 = x1.length() + p1;
    long long len2 = x2.length() + p2;

    // Compare lengths first
    if (len1 > len2) return 1;
    if (len1 < len2) return -1;

    // If lengths are the same, compare digit by digit
    int n = x1.length(), m = x2.length();
    for (int i = 0; i < max(n, m); i++) {
//Inside the loop,
// this line assigns c1 to the character at index i of x1 
//if i is less than n (i.e., within the bounds of x1). 
//If i is greater than or equal to n, c1 is assigned the character '0'.
        char c1 = (i < n) ? x1[i] : '0';// Imp line
        char c2 = (i < m) ? x2[i] : '0';// Imp line
        if (c1 > c2) return 1;
        if (c1 < c2) return -1;
    }

    // If all digits are the same
    return 0;
}

void solve() {
    string x1, x2;
    long long p1, p2;
    cin >> x1 >> p1 >> x2 >> p2;

    int result = compare(x1, p1, x2, p2);
    if (result > 0) cout << ">" << endl;
    else if (result < 0) cout << "<" << endl;
    else cout << "=" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin>>t;
    while(t--){
          solve();
    }  
    return 0;
}