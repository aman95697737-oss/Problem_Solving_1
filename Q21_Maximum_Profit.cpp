
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minPrice = arr[0];
    int profit = 0;

    for(int i = 1; i < n; i++) {
        profit = max(profit, arr[i] - minPrice);
        minPrice = min(minPrice, arr[i]);
    }

    cout << profit;

    return 0;
}