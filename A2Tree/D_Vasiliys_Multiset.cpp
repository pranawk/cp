//  D. Vasiliy's Multiset

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<unordered_map<int,int>>mp(49);
    for(int i=0; i<n; i++){
        char c; int ii;
        cin>>c>>ii;
        int bit=0;
        while((1<<bit)<=ii)bit++;
        if(c=='+'){
            mp[bit][ii]++;
        }
        else if(c=='-'){
            mp[bit][ii]--;
            if(mp[bit][ii]==0)mp[bit].erase(ii);
        }
        else{
            int ans=ii;
             for(int j=48; j>=0; j--){
                if(mp[j+1].size()>0 && (ii&(1<<j))==0){
                    for(auto k:mp[j+1])ans=max(ans,ii^(k.first));
                    break;
                }
             }
            cout<<ans<<endl;
        }
    }
    return 0;
}