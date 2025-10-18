#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> houses;
    int num;
    while (cin >> num) {
        houses.push_back(num);
    }
    int n = houses.size();
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 1) {
        cout << houses[0] << endl;
        return 0;
    }
    int prev2 = houses[0];
    int prev1 = max(houses[0], houses[1]);
    for (int i = 2; i < n; i++) {
        int current = max(prev1, prev2 + houses[i]);
        prev2 = prev1;
        prev1 = current;
    }
    cout << prev1 << endl;
    return 0;
}