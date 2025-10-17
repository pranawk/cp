#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int k;
    cin>>k;
    int ac=0,sc=0;
    for(int i=0; i<s.size(); i++){if(i!=0&&s[i]=='?')ac++;else if(i!=0&&s[i]=='*')sc++;}
    if((s.size()-2*ac- 2*sc)>k){cout<<"Impossible"; return 0;}
    if(sc==0&&((s.size()-ac)<k)){cout<<"Impossible"; return 0;}
    int ss=s.size()-ac-sc;
    string ans;
    int i=0;
    while(i<s.size()){
        if(s[i]=='?'||s[i]=='*'){i++;continue;}
        if((i+1<s.size()&& s[i+1]=='*')&& ss<k){
            while(ss<k){ans+=s[i];ss++;}
        }
        if((i+1<s.size()&& s[i+1]=='?')&& ss>k){ss--;i++;continue;}
        if((i+1<s.size()&& s[i+1]=='*')&& ss>k){ss--;i++;continue;}
        ans+=s[i];
        i++;
    }
    cout<<ans;
return 0;
}