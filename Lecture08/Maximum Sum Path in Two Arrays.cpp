#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        int arr1[n], arr2[m];
        
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        
        for (int i = 0; i < m; i++)
            cin >> arr2[i];
        
        int i = 0, j = 0;
        int sum1 = 0, sum2 = 0;
        int result = 0;
        
        while (i < n && j < m) {
            if (arr1[i] < arr2[j])
                sum1 += arr1[i++];
            else if (arr1[i] > arr2[j])
                sum2 += arr2[j++];
            else {
                result += max(sum1, sum2) + arr1[i];
                sum1 = sum2 = 0;
                i++;
                j++;
            }
        }
        
        while (i < n)
            sum1 += arr1[i++];
        
        while (j < m)
            sum2 += arr2[j++];
        
        result += max(sum1, sum2);
        
        cout << result << endl;
    }
    
    return 0;
}