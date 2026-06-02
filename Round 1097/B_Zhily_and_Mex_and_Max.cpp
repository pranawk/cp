//  B. Zhily and Mex and Max

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
        set<int>st;
        for(int i=0; i<n; i++){cin>>a[i];st.insert(a[i]);}
        sort(a.begin(),a.end());
        long long ans=a[n-1];
        if(ans==0)ans++;
        int ii=0;
        for(int i=0; i<n-1; i++){
            if(st.find(ii)!=st.end())ii++;
            if(ii==a[n-1])ii++;
            ans+=a[n-1]+ii;
        }
        //if(ii==a[n-1])ans++;
        cout<<ans<<endl;
    }
    return 0;
}