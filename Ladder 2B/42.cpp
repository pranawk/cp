#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,m;
    cin>>n>>k>>m;
    vector<string>s(n);
    for(int i=0; i<n; i++)cin>>s[i];
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    unordered_map<string,int>mp;
    for(int i=0; i<k; i++){
        int kk;
        cin>>kk;
        int m=INT_MAX;
        vector<int>grp(kk);
        for(int j=0; j<kk; j++){
            cin>>grp[j];
            m= min(m,a[grp[j]-1]);
        }
        for(int j=0; j<kk; j++){
            a[grp[j]-1]=m;
        }
        for(int j=0; j<kk; j++){
            mp[s[grp[j]-1]]=m;
        }
    }
    long long cost=0;
    while(m--){
        string ss;
        cin>>ss;
        cost+=mp[ss];
    }
    cout<<cost<<endl;
    return 0;
}