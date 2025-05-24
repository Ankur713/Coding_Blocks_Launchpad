#include <iostream>
using namespace std;

int main() {
    int r, c, x, found = 0;
    cin >> r >> c;
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    cin >> x;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] == x) found = 1;
    cout << (found ? "Found" : "Not Found");
    return 0;
}
