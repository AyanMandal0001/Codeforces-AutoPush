#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n; 
    string s; 
    cin >> n >> s; 

  
    int cnt = count(s.begin(), s.end(), '#');// Imp function
    int cnt_empty = 0; 
    int maxi = -1; 

   
    for (int i = 0; i < n; i++) {
        if (s[i] == '#') {
           
            cnt_empty = 0;
        } else {
            
            if (i == 0 || s[i-1] == '#') {
                
                cnt_empty = 1;
            } else {
                
                cnt_empty++;
            }
            
            maxi = max(maxi, cnt_empty);
        }
    }
    cout << (maxi >= 3 ? 2 : n - cnt) << endl;
    }
    return 0;
}