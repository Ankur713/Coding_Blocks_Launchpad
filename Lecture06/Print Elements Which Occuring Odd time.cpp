#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin >> n;
    int a[n];

    for(int i=0;i<n;i++) cin >> a[i];
    
    int b[n];

    for(int i=0;i<n;i++) b[i] = 0;
    for(int i=0;i<n;i++) b[a[i]]++;

    for(int i=0;i<n;i++){
        if(b[i]%2==1) cout << i <<" ";
    }

    return 0;
}