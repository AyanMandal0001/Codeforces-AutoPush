#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string timur = "Timur";
        sort(s.begin(), s.end());
        sort(timur.begin(), timur.end());
        if (s == timur) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
