#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        cin >> m;

        sort(a, a + n);
        int x = 0, y = 0, i = 0, j = n - 1;
        while(i < j) {
            int s = a[i] + a[j];
            if(s == m) { x = a[i]; y = a[j]; i++; j--; }
            else if(s < m) i++;
            else j--;
        }

        cout << "Deepak should buy roses whose prices are " << x << " and " << y << ".\n\n";
       
    }
}
