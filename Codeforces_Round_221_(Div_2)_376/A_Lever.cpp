#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;  
    cin >> s;
    long long sum1 = 0; 
    long long sum2 = 0;
    long long index = s.find('^');//' ' donnot forget
    

    for (long long i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            long long num = s[i] - '0'; 
            if (i < index) {
                sum1 += num * (index - i); // left side
            } else if (i > index) {
                sum2 += num * (i - index); // right side
            }
        }
    }

    if (sum1 > sum2) {
        cout << "left" << endl;
    } else if (sum1 < sum2) {
        cout << "right" << endl;
    } else {
        cout << "balance" << endl;
    }
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}