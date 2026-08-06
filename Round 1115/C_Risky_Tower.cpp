//  C. Risky Tower

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>a(n,vector<int>(m));
        vector<int>dv(n);
        for(int i=0; i<n; i++)cin>>dv[i];
        priority_queue<int>pq;
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){cin>>a[i][j];pq.push(a[i][j]);mp[a[i][j]]++;}
        }
        int mn=INT_MAX;
        int ans=m;
        for(int i=0; i<n; i++){
            mn=min(mn, dv[i]);
            int sum=0;
            vector<int>temp;
            unordered_map<int,int>tmp;
            int ii=0;
            int nn=m;
            while(nn>0 && !pq.empty() &&  sum<mn){
                if(tmp[pq.top()]<mp[pq.top()]){
                    sum+=pq.top();ii++;
                    temp.push_back(pq.top());nn--;
                }
                tmp[pq.top()]++;
                pq.pop();
            }
            if(sum>=mn)ans=min(ans,ii);
            for(int i=0; i<temp.size(); i++)pq.push(temp[i]);
            for(int j=0; j<m; j++)mp[a[i][j]]--;
        }
        cout<<ans<<endl;
    }
    return 0;
}