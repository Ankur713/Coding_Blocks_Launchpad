#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int arr[n];
        int total_sum = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total_sum += arr[i];
        }
        
        int max_so_far = arr[0];
        int max_ending_here = arr[0];
        int min_so_far = arr[0];
        int min_ending_here = arr[0];
        
        for (int i = 1; i < n; i++) {
            max_ending_here = max(arr[i], max_ending_here + arr[i]);
            max_so_far = max(max_so_far, max_ending_here);
            
            min_ending_here = min(arr[i], min_ending_here + arr[i]);
            min_so_far = min(min_so_far, min_ending_here);
        }
        
        if (min_so_far == total_sum) {
            cout << max_so_far << endl;
        } else {
            cout << max(max_so_far, total_sum - min_so_far) << endl;
        }
    }
    
    return 0;
}