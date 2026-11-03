//  D. Lock and Unlock

#include<bits/stdc++.h>

using namespace std;
int cost(vector<int>&a, int ii, int n ){
    int mx=INT_MIN, mn=INT_MAX;
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=abs(a[i]-ii);
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        int l= *min_element(a.begin(),a.end());
        int r= *max_element(a.begin(),a.end());
//         int mp= r-l;
//         int ans=findMinCountIndex(l,r,n,a);
//         cout<<ans<<" "<<mp<<endl;
    }
    return 0;
}