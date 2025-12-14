//  C. Annoying Game

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<long long>nums(n),b(n);
        for(int i=0; i<n; i++)cin>>nums[i];
        for(int i=0; i<n; i++)cin>>b[i];
        vector<long long>kadane(n,0);
        long long sum=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(sum<0){kadane[i]=nums[i];sum=0;continue;}
            kadane[i]=sum;
        }
        for(int i=n-2; i>=0; i--){
            if(kadane[i]>=0 && kadane[i+1]>=0){
                kadane[i]=max(kadane[i],kadane[i+1]);
            }
        }
//        for(int i=0; i<n; i++)cout<<kadane[i]<<" ";cout<<endl;
//        continue;
        if(k%2==0 &&n==1){cout<<nums[0]<<endl;}
        else if(k%2==0 && n>1)cout<<*max_element(kadane.begin(),kadane.end())<<endl;
        else{
            if(kadane.size()==1){cout<<nums[0]+b[0]<<endl;continue;}
            vector<long long>kadane2=kadane;
            for(int i=0; i<n; i++){
                if(kadane[i]<0){
                    long long jj=nums[i]+b[i];
                    if(i-1>=0 && kadane[i-1]>0)jj+=kadane[i-1];
                    if(i+1<n && kadane[i+1]>0)jj+=kadane[i+1];
                    kadane2[i]=max(kadane2[i],jj);
                }
                else kadane2[i]=max(kadane[i],kadane[i]+b[i]);}
            cout<<*max_element(kadane2.begin(),kadane2.end())<<endl;
        }
    }
    
    return 0;
}
