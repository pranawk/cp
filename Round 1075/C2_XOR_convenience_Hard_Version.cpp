//  C2. XOR-convenience (Hard Version)

#include<bits/stdc++.h>

using namespace std;
void swap(vector<int>&nums, int i, int j){
    int k=nums[i];
    nums[i]=nums[j];
    nums[j]=k;
}
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
            if(fl[i]==false){pp=i;break;}
        }
        unordered_set<int>st;
        for(int i=1; i<=n; i++)st.insert(i);
        st.erase(pp);
        int r=1;
        bool fff=false;
        //cout<<pp<<endl;
        nums[0]=pp;
        while(r<n && n%2==0){
            st.erase(nums[r]);
            if((nums[r]^1)<=n && (nums[r]^1)!=nums[r] && st.find(pp^(r+1))!=st.end()){
                fff=true;
                swap(nums,0, r);
                break;
            }
            r++;
        }
        if(fff==false && n%2==0){
            cout<<-1<<endl;continue;
        }
        if(n%2==1)nums[0]=pp;
        for(int i=0; i<n; i++)cout<<nums[i]<<" ";
        cout<<endl;
    }
    return 0;
}