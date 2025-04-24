#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int freq[100001] = {0}; // assuming elements are in range [0, 100000]

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 0; i < 100001; ++i) {
        if (freq[i] == 2) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
