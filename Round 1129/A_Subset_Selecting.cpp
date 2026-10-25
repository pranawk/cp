//  A. Subset Selecting

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n, k;
        cin>>n>>k;
        map<int,int>mp;
        int temp;
        for(int i=0; i<n; i++){cin>>temp; mp[temp]++;}
        int ii=0;
        int ans=-1;
        int ex=0;
        for(auto i:mp){
            if(i.first==ii && i.second>=k){
                ex+=i.second-k;
                ii++;
            }
            else if(i.first==ii && i.second+ex>=k){
                ex-=k-i.second;
                ii++;
            }
            else {ans=ii;break;}
        }
        if(ans==-1)ans=ii;
        cout<<ans<<endl;
    }
    return 0;
}