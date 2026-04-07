//  D. Flip the Bit (Hard Version)
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
        vector<int>a(n),p(k);
        for(int i=0;i<n; i++)cin>>a[i];
        for(int i=0;i<k; i++){cin>>p[i];p[i]--;}
        vector<pair<int,int>>req(n,{INT_MAX, -1});
        int cos=0;
        if(k==1){cout<<" pp"<<endl;continue;}
        int pp=a[p[0]];bool pr=true;
        for(int j=p[0]; j>=0; j--){
            if(a[j]!=pp){if(pr==true)cos+=2;
            if(req[j].first>cos){
                req[j].first=cos; req[j].second=0;
            }pr=false;}
            else{pr=true;}
        }cos=0;pr=true;
        for(int j=p[0]; j<p[1]; j++){
            if(a[j]!=pp){if(pr==true)cos+=2;
            if(req[j].first>cos){
                req[j].first=cos; req[j].second=0;
            }pr=false;}else{pr=true;}
        }
        //******
        for(int i=1; i<k-1; i++){
            cos=0;pr=true;
            for(int j=p[i]; j>p[i-1]; j--){
                if(a[j]!=pp){if(pr==true)cos+=2;
                if(req[j].first>cos){
                    req[j].first=cos; req[j].second=i;
                }pr=false;}else{pr=true;}
            }
            cos=0;pr=true;
            for(int j=p[i]; j<p[i+1]; j++){
                if(a[j]!=pp){if(pr==true)cos+=2;
                if(req[j].first>cos){
                    req[j].first=cos; req[j].second=i;
                }pr=false;}else{pr=true;}
            }
        }
        //*******
        cos=0;pr=true;
        for(int j=p[k-1]; j>=p[k-2]; j--){
            if(a[j]!=pp){if(pr==true)cos+=2;
            if(req[j].first>cos){
                req[j].first=cos; req[j].second=k-1;
            }pr=false;}else{pr=true;}
        }cos=0;pr=true;
        for(int j=p[k-1]; j<n; j++){
            if(a[j]!=pp){if(pr==true)cos+=2;
            if(req[j].first>cos){
                req[j].first=cos; req[j].second=k-1;
            }
            pr=false;
            }
            else{pr=true;}
        }
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
           if(req[i].first==INT_MAX)continue;
           else{
            mp[req[i].second]=max(mp[req[i].second],req[i].first);
           }
        }
        int ans=0;
        for(auto i:mp)ans+=i.second;
        for(int i=0; i<n; i++){
            if(req[i].first==INT_MAX)cout<<0<<" ";
            else cout<<req[i].first<<" ";
        }cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}