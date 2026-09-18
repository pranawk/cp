//  C. Vanya and Scales

#include<bits/stdc++.h>

using namespace std;
long long w,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>w>>m;
    vector<int>dd;
    while(m>0){
        dd.push_back(m%w);
        m/=w;
    }
    bool fl=true;
    for(int i=0; i<dd.size(); i++){
        if(dd[i]==w)if(i+1<dd.size())dd[i+1]++;
        dd[i]%=w;
//         cout<<dd[i]<<" ";
        if(dd[i]==0 || dd[i]==1 )continue;
        if(w-dd[i]==1 ){ if(i+1<dd.size())dd[i+1]++; continue;}
        fl=false;
    }
    cout<<(fl==true ? "YES" : "NO")<<endl;
    return 0;
}