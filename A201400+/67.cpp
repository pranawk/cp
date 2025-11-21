#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    sort(nums.begin(),nums.end());
    vector<bool>taken(n,false);
    int l=0;int r=0;
    vector<int>e_counts(n,0);
    while(r<n){
        while(nums[l]<=nums[r]/2)l++;
        e_counts[r]=l;
        r++;
    }
    //for(int i=0; i<n; i++)cout<<e_counts[i]<<" ";
//    l=0;r=1;int ll=0, rr=0;
//    while(r<n){
//        while(r+1<n && e_counts[r]==e_counts[r+1])r++;
//        rr=r;
//        while(1){
//            while(taken[l]==true)l++;
//            if(nums[l]>nums[r]/2 || r<=ll)break;
//            if(nums[l]<=nums[r]/2){
//                //cout<<l<<" "<<r<<endl;
//                taken[l]=true;taken[r]=true;r--;
//            }
//        }
//        ll=rr;
//        r=rr+1;
//    }
    int ll=0;
    while(nums[ll]<=nums[n-1]/2)ll++;
    ll--;int rr=n-1;
    ll=min(ll,n/2-1);
    //cout<<ll;
    while(ll>=0){
        while(taken[rr]==true)rr--;
        if(rr<0)break;
        if(nums[rr]/2>=nums[ll]){
            taken[ll]=true;taken[rr]=true;
            //cout<< rr+1<<" "<< ll+1<<endl;
            rr--;
        }
        else ll--;
        while(ll>=0 && taken[ll]==true)ll--;
    }
    int cnt=0,cnn=0;
    for(int i=0; i<n; i++){
        if(taken[i]==true)cnt++;
        else cnn++;
    }
    //for(int i=0; i<n; i++)cout<<nums[i]<<" ";
    cout<<cnn+cnt/2<<endl;
    return 0;
}