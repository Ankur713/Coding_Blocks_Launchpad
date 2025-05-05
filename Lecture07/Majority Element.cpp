#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        freq[x]++;
        if (freq[x] > n / 2) {
            cout << x;
            break;
        }
    }
    return 0;
}
