#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    int arr[1000], count[10001];

    for(int i=0;i<10001;i++) count[i] = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        count[arr[i]]++;
        if (count[arr[i]] > N / 2) {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}
