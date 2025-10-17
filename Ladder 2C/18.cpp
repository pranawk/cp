#include<bits/stdc++.h>
using namespace std;

//void solve(int &ans,int cn,vector<pair<int,int>>&arr ,int i,int ca,int n,int cs){
//    if(cn==3){
//        if(ans>ca)ans=ca;
//        return;
//    }
//    for(int j=i; j<n; j++){
//        if(arr[j].first>cs){
//            ca+=arr[j].second;
//            solve(ans,cn+1,arr,j+1,ca,n,arr[j].first);
//            ca-=arr[j].second;
//        }
//    }
//    if(i==n-1 && ans==INT_MAX){ans=-1;return;}
//    return;
//}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i].first;
    for(int i=0; i<n; i++)cin>>arr[i].second;
    int ans= INT_MAX;bool fl=true;
    for(int i=1; i<n-1; i++){
        int sum=arr[i].second;
        int b=-1;
        for(int j=0; j<i; j++){
            if(arr[j].first>=arr[i].first)continue;
            if(b==-1 || arr[j].second<b)b=arr[j].second;
        }
        if(b==-1)continue;
        sum+=b;
        b=-1;
        for(int j=i+1; j<n; j++){
            if(arr[j].first<=arr[i].first)continue;
            if(b==-1|| arr[j].second<b)b=arr[j].second;
        }
        if(b==-1)continue;
        sum+=b;fl=false;
        ans=min(ans,sum);
    }
    if(fl==true)ans=-1;
    cout<<ans<<endl;;
return 0;
}
