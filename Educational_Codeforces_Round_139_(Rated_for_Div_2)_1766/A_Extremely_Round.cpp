#include <bits/stdc++.h>
using namespace std;
int solve(int num) {
   if(num < 10) return num;
    int n = to_string(num).length();
    return (n-1)*9+ num / pow(10,n-1);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        cout<<solve(n)<<endl;
    }
}
