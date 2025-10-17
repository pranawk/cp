#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    int count = 0;
    long long root = sqrt(n);
    for (long long i = 1; i <= root; i++) {
        if (n % i == 0) {
            count += 2;
        }
    }
    if (root * root == n) {
        count--;
    }

    cout << count << endl;
    return 0;
}