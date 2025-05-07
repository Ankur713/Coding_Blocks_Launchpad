#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    for (int i = 0; i < n; i++) cin >> h[i];

    vector<int> left(n), right(n);
    left[0] = h[0];
    for (int i = 1; i < n; i++) left[i] = max(left[i - 1], h[i]);
    right[n - 1] = h[n - 1];
    for (int i = n - 2; i >= 0; i--) right[i] = max(right[i + 1], h[i]);

    int water = 0;
    for (int i = 0; i < n; i++) water += min(left[i], right[i]) - h[i];
    cout << water;
}
