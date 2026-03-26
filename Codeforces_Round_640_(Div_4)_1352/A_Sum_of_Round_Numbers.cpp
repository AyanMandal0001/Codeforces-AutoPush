#include <iostream>
#include <vector>
using namespace std;

vector<int> getRoundNumbers(int n) {
    vector<int> roundNumbers;
    int place = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            roundNumbers.push_back(digit * place);
        }
        n /= 10;
        place *= 10;
    }
    return roundNumbers;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> roundNumbers = getRoundNumbers(n);
        cout << roundNumbers.size() << endl;
        for (int it : roundNumbers) {
            cout << it<< " ";
        }
        cout << endl;
    }
    return 0;
}
