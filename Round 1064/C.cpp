#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        unordered_map<int,int>mpleft,mpright;
        mpleft[0]=n-1;
        for(int i=1; i<n ; i++)mpleft[i]=i-1;
        mpright[n-1]=0;
        for(int i=0; i<n-1; i++)mpright[i]=i+1;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
        for(int i=0; i<n; i++)pq.push({nums[i],i});
        long long ans=0;
        while(pq.size()!=1){
            int a=pq.top().first;
            int i=pq.top().second;
            pq.pop();
            int b;
            if(nums[mpleft[i]]>nums[mpright[i]]){
                b=nums[mpright[i]];
                mpright[mpleft[i]]=mpright[i];
                mpleft[mpright[i]]=mpleft[i];
            }
            else{
                b=nums[mpleft[i]];
                mpright[mpleft[i]]=mpright[i];
                mpleft[mpright[i]]=mpleft[i];
            }
            ans+=max(a,b);
            //cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}