#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_set<int> existing_numbers;
    bool has_zero = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            has_zero = true;
        }
        if (a[i] != -1) {
            existing_numbers.insert(a[i]);
        }
    }
    if (has_zero) {
        cout << "NO" << endl;
        return;
    }
    if (existing_numbers.size() > 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}