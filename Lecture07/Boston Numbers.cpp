#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n, original;
    cin >> n;
    original = n;
    int digitSum = sumOfDigits(n), factorSum = 0;

    for(int i = 2; i*i <= n; i++) {
        while(n % i == 0) {
            factorSum += sumOfDigits(i);
            n /= i;
        }
    }

    if(n > 1) factorSum += sumOfDigits(n); // if n is a prime > sqrt(original)

    // if the number was not composite, it's not a Boston number
    if(original == n) cout << 0;
    else cout << (digitSum == factorSum);
}
