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
        string s;
        cin>>s;
        int ac=s[0]=='a';
        vector<long long>pa(n,0),sa(n,0);
        for(int i=1; i<n; i++){
            if(s[i]=='a'){pa[i]=pa[i-1];ac++;}
            else {pa[i]= pa[i-1]+ac;}
        }ac=s[n-1]=='a';
        for(int i=n-2; i>=0; i--){
            if(s[i]=='a'){sa[i]=sa[i+1]; ac++;}
            else {sa[i]=sa[i+1]+ac;}
        }

        int bc=0;
        vector<long long>pb(n,0),sb(n,0);
        for(int i=0; i<n; i++){
            if(s[i]=='b'){if(i!=0)pb[i]=pb[i-1];bc++;}
            else {if(i!=0)pb[i]=pb[i-1]+bc;}
        }bc=0;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='b'){if(i!=n-1)sb[i]=sb[i+1];bc++;}
            else {if(i!=n-1)sb[i]=sb[i+1]+bc;}
        }
        long long ans=LLONG_MAX;
        for(int i=0; i<n; i++){
            ans=min(ans,min(pa[i]+sa[i], pb[i]+sb[i]));
        }
        cout <<ans<< endl;
    }
    return 0;
}