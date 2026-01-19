#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tt;
cin>>tt;
while(tt--){
    int n,m;
    long long h;
    cin>>n>>m>>h;
    vector<long long>a(n),rr;
    for(int i=0;i<n;i++)cin>>a[i];
    rr=a;
    vector<int>rp;
    for(int i=0;i<m;i++){
        int b;
        long long c;
        cin>>b>>c;
        b--;
        rp.push_back(b);
        rr[b]+=c;
        if(rr[b]>h){
            for(int j=0;j<rp.size();j++){
                rr[rp[j]]=a[rp[j]];
            }
            rp.clear();
        }
    }
    for(int i=0;i<n;i++)cout<<rr[i]<<" ";
    cout<<endl;
    }
return 0;
}