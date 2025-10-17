#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long ans=0;
        int n;
        cin>>n;
        vector<int>o;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            if(temp%2==0)ans+=temp;
            else o.emplace_back(temp);
        }
        int oo=o.size();
        if(oo==0){cout<<0<<endl;continue;}
        sort(o.begin(),o.end());
        int l=0, r=oo-1;
        while(l<=r){
            ans+=o[r];
            r--;l++;
        }
        cout<<ans<<endl;
    }
    return 0;
}