//  C. GCD Treasury

#include<bits/stdc++.h>

using namespace std;

long long solve(vector<int>&a, int x) {
    if (x <= 1||a.empty()) return 0;
    long long ans = 0;
    vector<int>divs;
    for(int i= 2; i*i<= x; i++) {
        if(x%i== 0) {
            divs.push_back(i);
            if(i*i!=x) {
                divs.push_back(x/i);
            }
        }
    }
    if (x>1) {
        divs.push_back(x);
    }
    for(int d : divs) {
        long long sum = 0;
        for (int val : a) {
            if (val % d == 0) {
                sum += val;
            }
        }
        ans=max(ans, sum);
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        cout<<solve(a,x)<<endl;
    }
    return 0;
}
