//  B. Minimize the error

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k1,k2;
    cin>>n>>k1>>k2;
    vector<int>a(n),b(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    unordered_map<int,int>mp;
    unordered_set<int>st;
    for(int i=0; i<n; i++){
        int dif=abs(a[i]-b[i]);
        st.insert(dif);
        mp[dif]++;
    }
    vector<int>ss;
    for(auto i:st)ss.push_back(i);
    sort(ss.begin(),ss.end());
    int ii=ss.size()-1;
    k1+=k2;
    while(ii!=0&& k1>0){
        if(mp[ss[ii]]>k1){
            mp[ss[ii]]-=k1;
            mp[ss[ii]-1]+=k1;
            k1=0;
        }
        else if(mp[ss[ii]]*(ss[ii]-ss[ii-1])>k1){
            int nn=mp[ss[ii]];
            mp[ss[ii]]=0;
            while(nn<=k1){
                k1-=nn;
                ss[ii]--;
            }
            mp[ss[ii]]=nn;
            mp[ss[ii]]-=k1;
            mp[ss[ii]-1]+=k1;
            k1=0;
        }
        else{
            int nn=mp[ss[ii]];
            mp[ss[ii]]=0;
            mp[ss[ii-1]]+=nn;
            k1-=(ss[ii]-ss[ii-1])*nn;
            ii--;
        }
    }
    if(mp[ss[ii]]*(ss[ii])>k1){
        int nn=mp[ss[ii]];
        mp[ss[ii]]=0;
        while(nn<=k1){
            k1-=nn;
            ss[ii]--;
        }
        mp[ss[ii]]=nn;
        mp[ss[ii]]-=k1;
        mp[ss[ii]-1]+=k1;
        k1=0;
    }
    else {
        int nn=mp[ss[ii]];
        mp[ss[ii]]=0;
        k1-=nn*ss[ii];
    }

    long long ans=0;
    if(k1%2==1)ans=1;
    for(auto i: mp)ans+=1ll*i.second*i.first*i.first;
    cout<<ans<<endl;
    return 0;
}