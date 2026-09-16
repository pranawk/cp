//  B. Before an Exam

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int d,s;
    cin>>d>>s;
    vector<pair<int,int>>mm(d);
    for(int i=0; i<d; i++)cin>>mm[i].first>>mm[i].second;
    vector<int>mr(d);
    int req=0;
    for(int i=d-1; i>=0; i--){
        mr[i]=req;
        req+=mm[i].first;
    }
    vector<int>ans(d);
    for(int i=0; i<d; i++){
        if(s<mm[i].first)break;
        int aa=min(s-mr[i], mm[i].second);
        s-=aa;
        ans[i]=aa;
    }
    if(s==0){
        cout<<"YES"<<endl;
        for(int i=0; i<d; i++)cout<<ans[i]<<" ";
    }
    else cout<<"NO";
    return 0;
}