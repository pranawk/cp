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
        for(int i=0 ; i<n; i++)cin>>nums[i];
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        bool flag=true;
        for(auto i : mp){
            if((i.second)%i.first!=0)flag=false;
        }
        if(flag==false)cout<<-1<<endl;
        else{
            int i=1;
            unordered_map<int,int>mp1;
            int ii=1;
            unordered_map<int,int>mp2;
            for(int i=0; i<n; i++){
                mp1[nums[i]]++;
                if(mp1[nums[i]]==1){mp2[nums[i]]=ii;ii++;}
                cout<<mp2[nums[i]]<<" ";
                if(mp1[nums[i]]>=nums[i]){
                    mp1[nums[i]]=0;}
            }
            cout<<endl;}
        }
        return 0;
    }


