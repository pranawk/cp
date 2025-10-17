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
        vector<int>p(n);
        int zc=0;
        for(int i=0; i<n; i++ ){cin>>p[i]; if(p[i]==0)zc++;}
        unordered_set<int>st;for(int i=1 ; i<=n; i++){st.insert(i);}
        for(int i=0; i<n; i++){if(st.find(p[i])!=st.end())st.erase(p[i]);}
        bool zz=false;if(zc>1)zz=true;
        int ans=INT_MAX; int ll=-1,rr=0;
        for(int i=0; i<n; i++){
            bool pl=true;
            if(p[i]==0){
                if(zz==true){pl=false;}
                else{if(st.find(i+1)==st.end())pl=false;
                }
                }
            else{if(p[i]!=i+1)pl=false;}
            if(pl==false){
                if(ll==-1){ll=i;}
                else rr=i;
            }
        }
        if(ll==-1)cout<<0<<endl;
        else cout<<rr-ll+1<<endl;
    }
    return 0;
}