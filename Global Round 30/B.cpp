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
        if(nums[0]==1){cout<<nums[0]<<" "<<nums[1]<<endl; continue;}
        vector<int>enums;
        vector<int>onums;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0)enums.push_back(nums[i]);
            else onums.push_back(nums[i]);
        }
        if(enums.size()>=2){cout<<enums[0]<<" "<<enums[1]<<endl;continue;}
        if(onums.size()>=40){
            for(int i=0; i<onums.size()-1; i++){
                if(onums[i+1]<onums[i]*2){cout<<onums[i]<<" "<<onums[i+1]<<endl;break;}
            }
            continue;
        }
        else{
            bool fl=false;
            for(int i=0; i<nums.size(); i++){
                for(int j=i+1; j<nums.size(); j++){
                    if((nums[j]%nums[i])%2==0){fl=true; cout<<nums[i]<<" "<<nums[j]<<endl; break;}
                }
                if(fl==true)break;
            }
            if(fl==false)cout<<-1<<endl;
        }
    }
    return 0;
}