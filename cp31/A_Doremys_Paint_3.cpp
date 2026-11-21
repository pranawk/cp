//  A. Doremy's Paint 3

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
        unordered_map<int,int>mp;
        int temp;
        for(int i=0; i<n; i++){cin>>temp; mp[temp]++;}
        bool fl=true;
        if(mp.size()>2)fl=false;
        int aa=-1,bb=-1;
        for(auto i:mp){
            if(aa==-1)aa=i.second;
            else bb=i.second;
        }
        if(abs(aa-bb)>=2 && mp.size()==2)fl=false;
        cout<<(fl==true ? "Yes" : "No");
        cout<<'\n';
    }
    return 0;
}