#include <iostream>
using namespace std;

int main() {
    long long t, s, x;
    cin >> t >> s >> x;

    if (x == t) {
        cout << "YES" << endl;
    } else if (x > t && ((x - t) % s == 0 || (x - t - 1) % s == 0 && x != t + 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
