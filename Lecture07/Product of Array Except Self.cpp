#include <bits/stdc++.h>
using namespace std;  

#define ll long long


int main(){
    
    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    ll product = 1;
    for(int i=0;i<n;i++) product = product*a[i];

    for(int i=0;i<n;i++){
        cout << product/a[i] <<" ";
    }

    return 0;
}
