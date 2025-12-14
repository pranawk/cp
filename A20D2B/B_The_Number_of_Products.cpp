//  B. The Number of Products

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long pos=0;
    pos=(1ll*n*(n+1))/2;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    vector<pair<int,int>>negatives;
    int prm=-1;
    for(int i=0; i<n; i++)if(nums[i]<0){negatives.push_back({i,i-prm-1});prm=i;}
    //for(int i=0; i<n; i++)cout<<negatives[i].first<<" "<<negatives[i].second<<endl;
    for(int i=2; i<negatives.size(); i++)negatives[i].second+=negatives[i-2].second;
    //for(int i=3; i<negatives.size(); i++)negatives[i].second+=negatives[i-2].second;
    long long negs=0;
    for(int i=0; i<negatives.size(); i++){
        if(i==negatives.size()-1)negs+=1ll*(negatives[i].second+1+i/2)*(n-negatives[i].first);
        else negs+=1ll*(negatives[i].second+1+i/2)*(negatives[i+1].first-negatives[i].first);
        //cout<<negs<<endl;
    }
    cout<<negs<<" "<<pos-negs<<endl;
    return 0;
}
