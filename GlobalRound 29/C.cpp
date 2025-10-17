#include<bits/stdc++.h>
using namespace std;
//l=2 r=3
void solve(string s, bool &ans, int i,int n){
    if(i>=n){ans=true;return;}
    if(i==0&&s[i]=='1'){solve(s,ans,i+1,n);}
    else if(i>0&& s[i]=='1'){
        if(s[i-1]=='3'){
           if(i+1<n&& s[i+1]=='0'){
                s[i+1]='2';
                solve(s,ans,i+2,n);
           }
           return;
        }
        else{
            while(s[i]!='0')i++;
            if(i>=n){ans=true;return;}
            s[i]='2';
            if((i-1>0&&s[i-1]=='1')&&(i-2>0&&(s[i-2]!='1'&&s[i-2]!='2')))solve(s,ans,i+1,n);
            if(i-1>0&&(s[i-1]=='2'||s[i-1]=='3'))solve(s,ans,i+1,n);
            if(i==0)solve(s,ans,i+1,n);
            s[i]='3';
            if(i+1==n)solve(s,ans,i+1,n);
            if(i+1<n&&s[i+1]!='1')solve(s,ans,i+1,n);
            if((i+1<n&&s[i+1]=='1')&&(i+2<n&&s[i+2]!='1'))solve(s,ans,i+1,n);
        }
    }
    else{
        s[i]='2';
        if((i-1>0&&s[i-1]=='1')&&(i-2>0&&(s[i-2]!='1'&&s[i-2]!='2')))solve(s,ans,i+1,n);
        if(i-1>0&&(s[i-1]=='2'||s[i-1]=='3'))solve(s,ans,i+1,n);
        if(i==0)solve(s,ans,i+1,n);
        s[i]='3';
        if(i+1==n)solve(s,ans,i+1,n);
        if(i+1<n&&s[i+1]!='1')solve(s,ans,i+1,n);
        if((i+2<n)&&((s[i+1]=='1')&&s[i+2]!='1'))solve(s,ans,i+1,n);
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        string s;cin>>s;
        bool ans=false;
        solve(s,ans,0,n);
        cout<<(ans==true? "YES" : "NO");
        cout<<endl;
    }
return 0;
}