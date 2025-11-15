#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        int ans=0;
        bool inf=false;
        bool ch=false;
        int lc=0,rc=0,asc=0;
        bool asa=false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='>')ch=true;
            if(ch==true&& (s[i]=='*'||s[i]=='<'))inf=true;
            if(asa==true&& (s[i]=='*' || s[i]=='<'))inf=true;
            if(s[i]=='*'){asa=true;asc++;}
            if(s[i]=='>')rc++;
            if(s[i]=='<')lc++;
        }
        if(inf==true){cout<<-1<<endl;continue;}
        cout<<max(asc+lc, asc+rc)<<endl;
    }
    return 0;
}