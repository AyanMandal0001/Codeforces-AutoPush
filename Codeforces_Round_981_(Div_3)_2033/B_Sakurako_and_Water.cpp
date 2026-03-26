#include <bits/stdc++.h>
using namespace std;

int solveSingleTestCase(int n, vector<vector<int>>& mat) {
    int op = 0;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
           
            if (mat[i][j] < 0) {
                int magic = -mat[i][j];
                op += magic;
               
                for (int k = 0; i - k >= 0 && j - k >= 0; k++) {
                    mat[i - k][j - k] += magic;
                }
            }
        }
    }

    return op;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> mat(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }

        int result = solveSingleTestCase(n, mat);
        cout << result << endl;
    }

    return 0;
}
