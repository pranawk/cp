//  B. Fashionable Array

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        sort(a.begin(),a.end());
        map<int,int>mp;
        set<int>st;
        for(int i=0; i<n; i++){mp[-1*a[i]]++;st.insert(a[i]);}
        priority_queue<int>pq;
        for(auto i:st)pq.push(i);
        bool fl=true;
        while(fl==true){
            bool f2=false;
            while(!pq.empty() && mp[-1*pq.top()]==0)pq.pop();
            if(pq.empty())break;
            int mx=mp[-1*pq.top()];
            for(auto i:mp){
                int temp=mx;
                int t2=i.second;
                while(temp>0 && t2>0){
                    cout<<-1*(i.first)<<" ";
                    f2=true;
                    temp--;
                    t2--;
                }
                mp[i.first]=t2;
            }
            fl=f2;
        }
        cout<<endl;
    }
    return 0;
}