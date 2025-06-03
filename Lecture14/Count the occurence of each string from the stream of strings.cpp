#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    int n;
    cin >> n;
    vector<string> vs(n);
    for(int i=0;i<n;i++) cin >> vs[i];

    
    map<string,int> msi;
    for(auto i:vs) msi[i]++;
    
    for(auto i:msi) cout << i.first <<" :->" <<i.second << endl;
    
    
    
    return 0;
}
