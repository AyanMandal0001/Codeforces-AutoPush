#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n; // Number of events
    cin >> n;

    int people_at_stop = 0; // Keeps track of the total people at the bus stop excluding Monocarp
    vector<string> result; // Stores the output for events of type B

    for (int i = 0; i < n; ++i) {
        string event_type; // Event type: either "B" or "P"
        cin >> event_type;

        if (event_type == "P") {
            int pi;
            cin >> pi;
            people_at_stop += pi; // Add arriving people to the total count at the bus stop
        } else if (event_type == "B") {
            int bi;
            cin >> bi;

            // Check if Monocarp can take the bus
            if (bi > people_at_stop) {
                // If there are more free seats than people at the stop, Monocarp can board
                result.push_back("YES");
            } else {
                // Otherwise, Monocarp cannot board
                result.push_back("NO");
            }

            // After the bus leaves, update the number of people at the stop
            people_at_stop = max(0, people_at_stop - bi); 
            // If the bus takes all people, remaining count is 0
        }
    }

    // Print the results for all bus events
    for (const string& res : result) {
        cout << res << endl;
    }

    return 0;
}
