//  Stick Lengths

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>stick(n);
    for(int i=0; i<n; i++)cin>>stick[i];
    sort(stick.begin(),stick.end());
    long long cost=0;
    int ht=stick[0];
    for(int i=0;i<n; i++){
        int cur_ht=ht+1;
        long long cur_cost=(i*1-cost)+stick[i]-(cur_ht);
        int nn=1;
        if(((stick[i]-cur_ht)>=0)&& (cur_cost< cost+stick[i]-cur_ht)){
            while((stick[i]-cur_ht>=0)&& cur_cost<cost+stick[i]-cur_ht){
                cur_ht=ht+nn;
                cur_cost=(i*nn-cost)+stick[i]-(cur_ht);
                nn++;
            }
            while(((stick[i]-ht-nn)< 0)|| (i*nn-cost) >cost)nn--;
            cur_cost=(i*nn-cost)+stick[i]-(ht+nn);
            ht+=nn;
            cost=abs(cur_cost);
            //cout<<nn<<" ";
        }
        else cost+=stick[i]-ht;
    }
        cout<<cost<<endl;

    return 0;
}
