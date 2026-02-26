//  C. Test Generator

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long s,m;
        cin>>s>>m;
        if(s%2==1){
            if(m%2==0){
                cout<<-1<<endl;
                continue;
            }
        }
        long long mm=m;
        vector<long long>factors,fac2;
        string bf;
        while(m>0){
            if((m&1)==0)bf+='0';
            else bf+='1';
            m>>=1;
        }
        long long ii=0,pp;
        for(int i=0; i<bf.size(); i++){
            if(bf[i]=='1'){
                int sz=factors.size();
                pp= 1ll<<i;
                factors.push_back(pp);
                for(int j=0; j<sz; j++)factors.push_back(pp+factors[j]);
            }
        }
        long long ans=0;
        for(int i=factors.size()-1; i>=0  && s>0; i--){
            long long  gg= factors[i];
            while(gg<=s )gg*=2;
            while(gg>=factors[i]){
                if((s&gg)==gg){
                    ans+=(gg/factors[i]);
                    s^=gg;
                }
                gg/=2;
            }
        }
        cout<<ans<<endl;
        //for(int i=0; i<factors.size(); i++)cout<<factors[i]<<" ";cout<<endl;
        //for(int i=0; i<fac2.size(); i++)cout<<fac2[i]<<" ";
        //cout<<ans<<endl;
    }
    return 0;
}