//  C1. XOR Convenience (Easy Version)

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
        vector<bool>fl(n+1,false);
        for(int i=1; i<n-1; i++){
            nums[i]=(i+1)^(1);
            fl[nums[i]]=true;
        }
        nums[n-1]=1;
        fl[1]=true;
        int pp=0;
        for(int i=1; i<=n; i++){
            if(fl[i]==false){pp=i;break;}}
        nums[0]=pp;
        for(int i=0; i<n; i++)cout<<nums[i]<<" ";
        cout<<endl;
    }
    return 0;
}