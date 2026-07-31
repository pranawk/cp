//  Stick Lengths

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<long long>stick(n);
    for(int i=0; i<n; i++)cin>>stick[i];
    sort(stick.begin(),stick.end());
    long long cost=0;
    for(int i=0; i<n; i++){
        cost+=abs(stick[i]-stick[n/2]);
    }
    cout<<cost;
    return 0;
}
