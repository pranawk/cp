#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k = 0;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int n = 0;
        cin >> n;
        vector<int> tem(n, 0);
        for (int j = 0; j < n; ++j) {
            int b;
            cin >> b;
            if (b < n) tem[b] = 1; 
        }
        bool found = false;
        for (int j = 0; j < n; ++j) {
            if (tem[j] == 0) {
                cout << j << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << "\n";
        }
    }
    return 0;
}

