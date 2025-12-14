#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        vector<int>app(n+1,-1);
        for(int i=0; i<n; i++){
            if(app[nums[i]]==-1)app[nums[i]]=1;
            else app[nums[i]]++;
        }
        int ans=0;
        //for(int i=0; i<n; i++)cout<<app[i];
         for(int i=0; i<=n;i++){
            if(app[i]==-1)continue;
            if(app[i]>i)ans+=app[i]-i;
            else if(app[i]<i)ans+=app[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}