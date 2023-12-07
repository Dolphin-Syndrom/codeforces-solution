#include <bits/stdc++.h>
using namespace std;
int main() {
	
ios::sync_with_stdio(0);
cin.tie(0);
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    const int max_value = 1001;
    vector<int> rightmost_occurrence(max_value, -1); 

    vector<int> result;

    for (int i = n - 1; i >= 0; --i) {
        if (rightmost_occurrence[arr[i]] == -1) {
            rightmost_occurrence[arr[i]] = i;
            result.push_back(arr[i]);
        }
    }

	cout<<result.size()<<"\n";
    for (int i = result.size() - 1; i >= 0; --i) {
        cout << result[i] << " ";
    }

    return 0;
}

