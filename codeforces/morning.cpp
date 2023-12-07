#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string pin;
        cin >> pin;

        int totalSeconds = 0;

        // Iterate over the pin code to calculate the total time
        for (int i = 0; i < 3; ++i) {
            // Get the digits at current and next positions
            int currentDigit = pin[i] - '0';
            int nextDigit = pin[i + 1] - '0';

            // Calculate the minimum time to move from current to next digit
            int timeToMove = min(abs(currentDigit - nextDigit), 10 - abs(currentDigit - nextDigit));

            // Add the calculated time to the total time
            totalSeconds += timeToMove;
        }

        // Output the result for each test case
        cout << totalSeconds << endl;
    }

    return 0;
}

