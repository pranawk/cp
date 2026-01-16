//  A. Rank List

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int p,t;
    vector<int>nn;
    while(n--){
        cin>>p>>t;
        p*=100;
        p+=50-t;
        nn.push_back(p);
    }
    sort(nn.begin(),nn.end());
    int ii=nn[nn.size()-k];
    int ans=0;
    for(int i=0; i<nn.size(); i++)if(nn[i]==ii)ans++;
    cout<<ans<<endl;
    return 0;
}