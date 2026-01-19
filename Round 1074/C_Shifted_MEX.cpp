//  C. Shifted MEX

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
        vector<int>nums;
        set<int>st;
        int ii=0;
        for(int i=0; i<n; i++){cin>>ii;st.insert(ii);}
        for(auto i: st)nums.push_back(i);
        sort(nums.begin(),nums.end());
        //for(int i=0; i<nums.size(); i++)cout<<nums[i]<<" ";
        int cn=1,mxcn=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]+1)cn++;
            else {mxcn=max(cn,mxcn);cn=1;}
        }
        mxcn=max(cn,mxcn);
        cout<<mxcn<<endl;
    }
    return 0;
}