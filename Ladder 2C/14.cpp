#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int>time(n,0);
    while(q--){
        int t,k,d;
        cin>>t>>k>>d;
        int cost=0;
        int i=0;int ii=0;
        for(int j=0; j<n; j++){if(time[j]<=t)ii++;if(ii==k)break;}
        if(ii<k){cout<<-1<<endl;continue;}
        while(k>0&& i<n){
            if(time[i]<=t){k--;cost+=i+1;time[i]=t+d;}
            i++;
        }
        cout<<cost<<endl;
    }
    return 0;
}