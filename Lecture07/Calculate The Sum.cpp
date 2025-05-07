#include <bits/stdc++.h>
using namespace std;

int main() {
   
    const long long MOD = 1e9 + 7;
    int N, Q, X;
    
    cin >> N;
    
    long long arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        cin >> X;
        
        long long temp[N];
        
        for (int j = 0; j < N; j++) {
            int prev_idx = (j - X + N) % N;
            temp[j] = (arr[j] + arr[prev_idx]) % MOD;
        }
        
        for (int j = 0; j < N; j++) {
            arr[j] = temp[j];
        }
    }
    
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum = (sum + arr[i]) % MOD;
    }
    
    cout << sum << endl;
    
    return 0;
}
