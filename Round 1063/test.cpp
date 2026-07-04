#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        vector<long long>a(n),b(n);
        for(long long i=0; i<n; i++)cin>>a[i];
        for(long long i=0; i<n; i++)cin>>b[i];
        
        // dp[i][0] = max of mins to reach top of column i
        // dp[i][1] = min of maxs to reach top of column i
        // dp2[i][0] = max of mins to reach bottom of column i
        // dp2[i][1] = min of maxs to reach bottom of column i
        
        vector<pair<long long, long long>> dpTop(n), dpBot(n);
        
        // Initialize first column
        dpTop[0] = {a[0], a[0]};  // {min, max}
        dpBot[0] = {min(a[0], b[0]), max(a[0], b[0])};
        
        for(int i = 1; i < n; i++){
            // To reach top of column i: only from top of i-1
            dpTop[i] = {min(dpTop[i-1].first, a[i]), 
                        max(dpTop[i-1].second, a[i])};
            
            // To reach bottom of column i: from top or bottom of i-1
            // Path 1: top[i-1] -> top[i] -> bot[i]
            long long min1 = min({dpTop[i-1].first, a[i], b[i]});
            long long max1 = max({dpTop[i-1].second, a[i], b[i]});
            
            // Path 2: bot[i-1] -> bot[i]
            long long min2 = min(dpBot[i-1].first, b[i]);
            long long max2 = max(dpBot[i-1].second, b[i]);
            
            // Choose the best path (maximize min, minimize max)
            dpBot[i] = {max(min1, min2), min(max1, max2)};
        }
        
        // Final answer: we must end at bottom of column n-1
        // Consider path that goes: ... -> top[n-1] -> bot[n-1]
        long long minPath1 = min({dpTop[n-1].first, a[n-1], b[n-1]});
        long long maxPath1 = max({dpTop[n-1].second, a[n-1], b[n-1]});
        
        // Consider path that goes: ... -> bot[n-1]
        long long minPath2 = dpBot[n-1].first;
        long long maxPath2 = dpBot[n-1].second;
        
        // Take the best (max of mins, min of maxs)
        long long minL = max(minPath1, minPath2);
        long long maxR = min(maxPath1, maxPath2);
        
        cout << minL * (2*n - maxR + 1) << endl;
    }
    return 0;
}
