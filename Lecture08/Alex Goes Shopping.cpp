#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int prices[n];
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        int A, k;
        cin >> A >> k;
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (A % prices[i] == 0) {
                count++;
            }
        }
        
        if (count >= k) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}