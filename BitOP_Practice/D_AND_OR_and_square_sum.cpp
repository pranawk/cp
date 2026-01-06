//  D. AND, OR and square sum

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<long long>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    vector<int>bit_count(21,0);
    for(int i=0; i<n; i++){
        int ii=20;
        while(nums[i]>0){
            if((nums[i]&(1<<ii))>0){
                bit_count[ii]++;
                nums[i]^=(1<<ii);
            }
            ii--;
        }
    }
    long long ans=0;
    //for(int i=0; i<21; i++)cout<<bit_count[i]<<" ";
    while(1){
        long long num=0;
        for(int i=0; i<21; i++){
            if(bit_count[i]>0){num|=(1<<i);bit_count[i]--;}
        }
        if(num==0)break;
        ans+=num*num;
    }
    cout<<ans<<endl;
    return 0;
}
