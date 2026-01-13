// 88 B. Zero Array

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    bool ans=true;
    long long sum=0;
    for(int i=0; i<n; i++){
        sum+=nums[i];
    }
    if(sum%2==1)ans=false;
    sum/=2;
    for(int i=0; i<n; i++)if(nums[i]>sum)ans=false;
    cout<<(ans==true ? "YES" : "NO")<<endl;
    return 0;
}