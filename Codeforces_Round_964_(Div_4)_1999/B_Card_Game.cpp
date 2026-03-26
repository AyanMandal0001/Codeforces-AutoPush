#include <iostream>
#include <vector>
using namespace std;

int count_wins(int a1, int a2, int b1, int b2) {
    vector<pair<int, int>> outcomes = {
        {a1, b1}, {a2, b2},
        {a1, b2}, {a2, b1},
        {a2, b1}, {a1, b2},
        {a2, b2}, {a1, b1}
    };
    
    int win_count = 0;
    for (int i = 0; i < outcomes.size(); i += 2) {
        int suneet_wins = 0;
        int slavic_wins = 0;
        
        if (outcomes[i].first > outcomes[i].second) {
            suneet_wins++;
        } else if (outcomes[i].first < outcomes[i].second) {
            slavic_wins++;
        }
        
        if (outcomes[i + 1].first > outcomes[i + 1].second) {
            suneet_wins++;
        } else if (outcomes[i + 1].first < outcomes[i + 1].second) {
            slavic_wins++;
        }
        
        if (suneet_wins > slavic_wins) {
            win_count++;
        }
    }
    
    return win_count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        cout << count_wins(a1, a2, b1, b2) << endl;
    }
    
    return 0;
}
