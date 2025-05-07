#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int c1, c2, c3, c4;
        cin >> c1 >> c2 >> c3 >> c4;
        
        int n, m;
        cin >> n >> m;
        
        int a[n], b[m];
        
        for (int i = 0; i < n; i++)
            cin >> a[i];
            
        for (int i = 0; i < m; i++)
            cin >> b[i];
        
        int rickshaw_cost = 0;
        for (int i = 0; i < n; i++)
            rickshaw_cost += min(a[i] * c1, c2);
        rickshaw_cost = min(rickshaw_cost, c3);
        
        int cab_cost = 0;
        for (int i = 0; i < m; i++)
            cab_cost += min(b[i] * c1, c2);
        cab_cost = min(cab_cost, c3);
        
        int total_cost = min(rickshaw_cost + cab_cost, c4);
        
        cout << total_cost << endl;
    }
    
    return 0;
}