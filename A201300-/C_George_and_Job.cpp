//  C. George and Job

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>p(n);
    for(int i=0; i<n; i++)cin>>p[i];
    priority_queue<pair<long long,int>>pq,pq2;
    long long sum=0;
    int l=0,r=0;
    while(r!=m){sum+=p[r];r++;}
    while(r<n){
        pq.push({sum, r-1});
        sum+=p[r];
        sum-=p[l];
        l++;r++;
    }
        pq.push({sum,n-1});
        pq2=pq;
    unordered_set<int>st;
    long long tsum=0;
    bool fl=false;
    int kk=k;
    while(!pq.empty() && k--){
        while(!pq.empty() && (st.find(pq.top().second)!=st.end() || st.find(pq.top().second-m+1)!=st.end()))pq.pop();
        if(!pq.empty()){
            tsum+=pq.top().first;
            //cout<<pq.top().first<<" "<<pq.top().second<<endl;
            for(int i=pq.top().second; i>pq.top().second-m; i--)st.insert(i);
        }
        else fl=true;
    }
    if(fl==true){
        for(int i=n-1; i>n-m-1; i--){
            st.clear();
            long long stsum=0;
            pq=pq2;
            for(int j=i; j>i-m; j--){st.insert(j); stsum+=p[j];}
            k=kk-1;
            while(!pq.empty() && k--){
                while(!pq.empty() && (st.find(pq.top().second)!=st.end() || st.find(pq.top().second-m+1)!=st.end()))pq.pop();
                    if(!pq.empty()){
                        stsum+=pq.top().first;
                        cout<<pq.top().first<<" "<<pq.top().second<<endl;
                        for(int k=pq.top().second; k>pq.top().second-m; k--)st.insert(k);
                    }
            }
            tsum=max(tsum,stsum);
            cout<<endl<<endl;
        }
    }
    cout<<tsum<<endl;
    return 0;
}