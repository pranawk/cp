//  A. Dragons

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>xy(n);
    for(int i=0; i<n; i++){cin>>xy[i].first; cin>>xy[i].second;}
    sort(xy.begin(),xy.end());
    bool fl=true;
    for(int i=0; i<n; i++){
        if(s<=xy[i].first)fl=false;
        else s+=xy[i].second;
    }
    cout<<(fl==true? "YES": "NO")<<endl;
    return 0;
}