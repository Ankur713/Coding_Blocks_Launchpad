#include <bits/stdc++.h>
using namespace std;


int countWays(const vector<int>& a, int index, int target) {
    // Base case: if we have processed all a
    if (index == a.size())
        return target == 0 ? 1 : 0; // Found a valid combination

    // Include the current a as + and -
    int add = countWays(a, index + 1, target - a[index]); // Using +
    int subtract = countWays(a, index + 1, target + a[index]); // Using -

    return add + subtract; 
}

int main() {

    int n, target;
    cin >> n >> target;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = countWays(a, 0, target); 
    cout << result << endl; 
    return 0;
}
