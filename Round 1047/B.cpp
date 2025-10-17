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
        for(int i=0 ;i<n;i++){cin>>nums[i];}
        for(int i=0; i<n; i++){
            nums[i]=n-nums[i]+1;
        }
        for(int i=0; i<n; i++)cout<<nums[i]<<" ";
        cout<<endl;
    }

    return 0;
}