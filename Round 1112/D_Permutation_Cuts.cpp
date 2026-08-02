//  D. Permutation Cuts

#include<bits/stdc++.h>

using namespace std;
const int MOD=998244353;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n-1);
        for(int i=0; i<n-1; i++)cin>>a[i];
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0; i<n-1; i++){
            if(mp[a[i]]!=0){
                mp[a[i]]++;
            }
        }
    }
    return 0;
}