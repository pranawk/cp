#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    vector<pair<int,int>>ans;
    int bb=b;
    while(a<=x){
        bb=b;
        while(bb<a&& bb<=y){
            ans.push_back({a,bb});
            bb++;
        }
        a++;
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)cout<<ans[i].first<<" "<<ans[i].second<<endl;
    return 0;
}