#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool matchesTemplate(const vector<int>& a, const string& s) {
    unordered_map<int, char> numToChar;
    unordered_map<char, int> charToNum;
    int n = a.size();
      if(n != s.length()){ return false; }
    for (int i = 0; i < n; ++i) {
        int num = a[i];
        char ch = s[i];

        if (numToChar.count(num) && numToChar[num] != ch) {
            return false;
        }
        if (charToNum.count(ch) && charToNum[ch] != num) {
            return false;
        }

        numToChar[num] = ch;
        charToNum[ch] = num;
    } 
      
     
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int m;
        cin >> m;
        vector<string> results(m);
        for (int i = 0; i < m; ++i) {
            string s;
            cin >> s;
            if (matchesTemplate(a, s)) {
                results[i] = "YES";
            } else {
                results[i] = "NO";
            }
        }

        for (const string& result : results) {
            cout << result << endl;
        }
    }
    return 0;
}
