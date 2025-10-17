#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>nums(n);
        vector<int>mv(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
            if(nums[i]<n)mv[nums[i]]++;
        }
        int num=n+1;
        int sum=0;
        for(int i=0; i<n;i++){
            if(mv[i]==0){num=i; break;}
        }
        for(int i=0; i<n ;i++){
            if(mv[nums[i]]>1 || nums[i]>num)nums[i]=num;
        }
        if(k==1){long long summ=0; for(int i=0; i<n; i++)summ+=nums[i]; cout<<summ<<endl;continue;}
        for(int i=0 ;i<n; i++)mv[i]=0;
        for(int i=0; i<n; i++){
            if(nums[i]<n)mv[nums[i]]++;
        }
        num=n+1;
        sum=0;
        for(int i=0; i<n;i++){
            if(mv[i]==0){num=i; break;}
        }
        for(int i=0; i<n ;i++){
            if(mv[nums[i]]>1 || nums[i]>num)nums[i]=num;
        }
        if(k%2==0){long long summ=0; for(int i=0; i<n; i++)summ+=nums[i]; cout<<summ<<endl;}
        for(int i=0 ;i<n; i++)mv[i]=0;
        for(int i=0; i<n; i++){
            if(nums[i]<n)mv[nums[i]]++;
        }
        num=n+1;
        sum=0;
        for(int i=0; i<n;i++){
            if(mv[i]==0){num=i; break;}
        }
        for(int i=0; i<n ;i++){
            if(mv[nums[i]]>1 || nums[i]>num)nums[i]=num;
        }
        if(k%2==1){long long summ=0; for(int i=0; i<n; i++)summ+=nums[i]; cout<<summ<<endl;}

    }
    return 0;
}