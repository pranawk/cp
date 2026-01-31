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
        unordered_set<int>st2;
        unordered_set<int>st3;
        for(int i=0; i<k; i++){
            if(s[i]=='L')aa--;
            else aa++;
            if(st3.find(aa)==st3.end() && mp[aa].size()!=0){
                st3.insert(aa);
                for(int j=0; j<mp[aa].size(); j++){
                    //cout<<mp[aa][j]<<" ";
                    st2.insert(mp[aa][j]);
                }
            }
            cout<<n-st2.size()<<" ";
        }
        //for(auto i: mp){cout<<i.first<<" "<<i.second<<endl;}
        cout<<endl;
    }
    return 0;
}