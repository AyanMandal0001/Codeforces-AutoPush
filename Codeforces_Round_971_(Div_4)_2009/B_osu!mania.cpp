#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> columns(n);
        for (int i = 0; i < n; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < row.size(); ++j) {
                if (row[j] == '#') {
                    columns[n - 1 - i] = j + 1; // Store the column index (1-based)
                    break;
                }
            }
        }
        for (int col : columns) {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
