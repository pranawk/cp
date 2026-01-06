#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,r,avg;
    cin>>n>>r>>avg;
    long long sum=0;int nn=n;
    vector<pair<int,int>>lol;
    while(nn--){
        int a,b;
        cin>>a>>b;
        sum+=a;
        lol.push_back({b,a});
    }
    long long more=0;
    sort(lol.begin(),lol.end());
    int l=0;
    long long reqsum=1ll*avg*n;
    while(sum<reqsum){
        while(l<n && lol[l].second==r)l++;
        if(sum+r-lol[l].second<=reqsum){
            sum+=(r-lol[l].second);
            more+=1ll*(r-lol[l].second)*lol[l].first;
            lol[l].second=r;
        }
        else{
            more+=1ll*(reqsum-sum)*lol[l].first;
            sum=reqsum;
        }
    }
    cout<<more<<endl;
    return 0;
}