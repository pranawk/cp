//  C2. Cirno and Number (Hard Version)

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        string a;
        long long aa;
        int n;
        cin>>aa>>n;
        a=to_string(aa);
        vector<int>d(n);
        for(int i=0; i<n; i++)cin>>d[i];
        vector<long long>can;
        long long mx=d[0];
        long long ans;
        if(d[0]==0 && n>1)mx=d[1];
        for(int i=0; i<a.size(); i++)mx=mx*10+d[0];
        ans=abs(mx-aa);
        if(a.size()>1){
            long long mn=0;
            for(int i=0; i<a.size()-1; i++)mn=mn*10+d[n-1];
            ans=min(aa-mn,ans);
        }


        long long prev=0;
        for(int i=0; i<a.size(); i++){
            int ii=0;
            while(ii<n && d[ii]<a[i]-'0')ii++;
            if (ii == n) {
                long long tmp = prev;
                tmp = tmp * 10 + d[n-1];
                for (int j = 0; j < a.size()-1-i; j++)
                    tmp = tmp * 10 + d[n-1];
                can.push_back(tmp);
            }
            if(ii==n)ii--;
            if(d[ii]==a[i]-'0'){
                long long tmp=prev;
                if(ii+1<n){tmp=tmp*10+d[ii+1];
                    for(int j=0; j<a.size()-1-i; j++)tmp=tmp*10+d[0];
                    can.push_back(tmp);
                    }
                    tmp=prev;
                if(ii-1>=0){tmp=tmp*10+d[ii-1];
                    for(int j=0; j<a.size()-1-i; j++)tmp=tmp*10+d[n-1];
                    can.push_back(tmp);}
                prev=prev*10+d[ii];
            }
            else{
                long long tmp=prev;
                if(ii<n){tmp=tmp*10+d[ii];
                    for(int j=0; j<a.size()-1-i; j++)tmp=tmp*10+d[0];
                    can.push_back(tmp);}
                tmp=prev;
                if(ii-1>=0){tmp=tmp*10+d[ii-1];
                    for(int j=0; j<a.size()-1-i; j++)tmp=tmp*10+d[n-1];
                    can.push_back(tmp);}
                break;
            }
        }
        //for(int i=0; i<can.size(); i++)cout<<can[i]<<" ";
        can.push_back(prev);

        //if(min(abs(aa-mx),abs(aa-mn))==0 && d[0]!=0)ans=max(abs(aa-mx),abs(aa-mn));
        for(int i=0; i<can.size(); i++){
            if(can[i]==0 && d[0]!=0)continue;
            ans=min(ans,abs(can[i]-aa));
        }
        cout<<ans<<endl;
    }
    return 0;
}