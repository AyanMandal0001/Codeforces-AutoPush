#include <bits/stdc++.h>
using namespace std;

int main() {
    string YES="YES" , NO="NO";
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if (n < 500) {
            if ((n / 100) == 1 && (1 < (n % 100) && (n % 100) < 10)) {
                cout << YES << endl;
            } else {
                cout << NO << endl;
            }
        } else if (n > 500) {
            if ((n / 1000) == 1 && (9 < (n % 1000) && (n % 1000) < 100)) {
                cout << YES << endl;
            } else {
                cout << NO << endl;
            }
        } else {
            cout << NO << endl;
        }
    }
    return 0;
}
