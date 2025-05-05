#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num, sum = 0, n = 0;
    
    // Find the number of digits
    while (num > 0) {
        num /= 10;
        n++;
    }
    
    num = original;
    
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }
    
    return sum == original;
}

int main() {
    int n;
    cin >> n;
    
    if (isArmstrong(n))
        cout << "true";
    else
        cout << "false";
    
    return 0;
}
