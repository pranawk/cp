//  C. Huge Pile

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        if(n==k){cout<<0<<endl;continue;}
        unordered_set<int>st,st2;
        st.insert(n/2);
        st.insert(n/2+n%2);
        if(st.find(k)!=st.end()){cout<<1<<endl;continue;}
        int ans=2;
        int n3=5;
        while(1){
            int fl=false;
            st2=st;
            for(auto ii :st){
                st2.erase(ii);
                if(ii/2==k)fl=true;
                if((ii/2+ii%2)==k)fl=true;
                st2.insert(ii/2);
                st2.insert(ii/2+ii%2);
            }
            st=st2;
            if(fl==true)break;
            ans++;
            if(st.size()==2 && st.find(1)!=st.end() && st.find(0)!=st.end()){ans=-1;break;}
        }
        //for(auto i: st)cout<<i<<" ";
        //cout<<endl;
        //if(st.find(k)==st.end())ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}