//  B. KiaKio and Squared Numbers

#include<bits/stdc++.h>

using namespace std;

unordered_map<int,int>mp;
void doit(){
    for(int i=1; i<9*81+1; i++){
        int ii=i;
        int cn=0;
        while(ii!=1 && ii!=4){
            int temp=0;
            while(ii>0){temp+=(pow((ii%10),2));ii/=10;}
            ii=temp;
            cn++;
        }
        while(cn<20)cn+=8;
        if(ii==1)mp[i]=-1;
        else mp[i]=cn;
    }
}
int giv(int a){
    int ii=0;
    while(a>0){
        ii+=pow((a%10),2);
        a/=10;
    }
    return ii;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        doit();
        int cn1=0;
        unordered_map<int,int>mp2;
        for(int i=0; i<n; i++){
            int cc=mp[giv(a[i])];
            if(cc==-1)cn1++;
            else mp2[cc]++;
        }
        int ans=0;
        ans+=((cn1)*(cn1-1))/2;
        for(auto i:mp2){
            int d=i.second;
            ans+=((d)*(d-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}