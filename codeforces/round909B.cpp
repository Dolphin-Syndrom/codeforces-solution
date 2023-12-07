#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int findAbsoluteDifference(const ll arr[], ll t) {
    int largest = arr[0], smallest = arr[0];

    for (int i = 1; i < t; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        } else if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return largest - smallest;
}

int main() {
	int n, i;
	ll t;
	cin>>n;
	while(n--)
	{
		cin >> t;
	
    
    ll* myArray = new ll[t];

    for ( i = 0; i < t; ++i) {
        cin >> myArray[i];
    }

    int absoluteDifference = findAbsoluteDifference(myArray, t);

    if (absoluteDifference != -1) {
        cout<< absoluteDifference << std::endl;
    }
}
    return 0;
}

