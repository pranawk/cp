//  B. Split

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>nums(2*n);
        for(int i=0; i<2*n; i++)cin>>nums[i];
        unordered_map<int,int>mp;
        for(int i=0; i<2*n; i++)mp[nums[i]]++;
        int ans=0;
        vector<int>bal;
        vector<int>nonbal;
        vector<int>fs;
        for(auto i:mp){
            if(i.second%2==1)bal.push_back(1);
            else{
                if(i.second%4==0)fs.push_back(2);
                else nonbal.push_back(2);
            }
        }
        int sum=0;
        for(int i=0; i<bal.size(); i++)sum+=bal[i];
        for(int i=0; i<nonbal.size(); i++)sum+=nonbal[i];
        for(int i=0; i<fs.size(); i++)sum+=fs[i];
        int fss=fs.size();
        fss%=2;
        if(fss==1 && bal.size()<2)sum-=2;
        //else if(fss==1&&bal.size()>=2)bal-=2;
        if(bal.size()%2==1)sum-=*min_element(bal.begin(),bal.end());

        cout<<sum<<endl;
    }
    
    return 0;
}
