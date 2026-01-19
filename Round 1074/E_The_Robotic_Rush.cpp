//  E. The Robotic Rush

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(n),b(m);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<m; i++)cin>>b[i];
        string s;
        vector<bool>fl(n+1,false);
        cin>>s;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        map<int,vector<int>>mp;
        int l=0,r=0;
        while(r<m){
            while(l<n && a[l]<b[r]){
                mp[b[r]-a[l]].push_back(l);
                l++;
            }
            r++;
        }
        l=n-1; r=m-1;
        while(r>=0){
            while(l>=0 && a[l]>b[r]){
                mp[b[r]-a[l]].push_back(l);
                l--;
            }
            r--;
        }
        int ans=0;
        int aa=0;
        for(int i=0; i<k; i++){
            if(s[i]=='L')aa--;
            else aa++;
            if(mp[aa].size()>0){
                for(int i=0; i<mp[aa].size(); i++){
                    if(fl[mp[aa][i]]==false){
                        fl[mp[aa][i]]=true;
                        ans++;
                    }
                }
            }
            cout<<n-ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}