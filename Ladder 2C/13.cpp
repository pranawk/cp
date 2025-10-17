#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    unordered_map<string, pair<unordered_set<string>,unordered_set<string>>>mp;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int l; cin>>l;
        for(int j=0; j<l; j++){
            string ss;
            cin>>ss;
            if(mp[s].second.find(ss)==mp[s].second.end()){
                mp[s].first.insert(ss);
                while(ss.size()>=1){
                    mp[s].second.insert(ss);
                    ss.erase(0,1);
                    if(mp[s].first.find(ss)!=mp[s].first.end()){
                        mp[s].first.erase(ss);
                        break;
                    }
                }
            }
        }
    }
    cout<<mp.size()<<endl;
    for(auto i : mp){
        cout<<i.first<<" "<<i.second.first.size()<<" ";
        for(auto j: i.second.first){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}