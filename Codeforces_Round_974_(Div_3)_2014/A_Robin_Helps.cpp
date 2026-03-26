#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int gold = 0;
        int people_given_gold = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
             if (a[i] >= k) {
                gold += a[i];
            } else if (a[i] == 0 && gold > 0) {
                gold--;
                people_given_gold++;
            }
        }

        cout << people_given_gold << endl;
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