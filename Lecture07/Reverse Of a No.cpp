#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int a[12];
    for(int i=0;i<12;i++) a[i] = 0;

    int count = 1;

    while (n > 0) {
        int digit = n % 10;
        a[digit] = count;
        count++;
        n /= 10;
    }

    for (int i = 9; i > 0; --i) {
        if (a[i] != 0) {
            cout << a[i];
        }
    }
    return 0;
}