#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    long long ans=1;
    for(int i=0; i<s.size(); ){
        if(s[i]=='m'|| s[i]=='w'){cout<<0<<endl;return 0;}
        else if(s[i]=='n'){
            long long la=1,la2=1;
            int ii=2;
            while(i<s.size()&& s[i]=='n'){
                if(ii<=1){long long temp=la2;la2+=la;la=temp;la2%=MOD;la%=MOD;}
                else ii--;
                i++;}
            ans*=la2;ans%=MOD;
        }
        else if(s[i]=='u'){
            long long la=1,la2=1;
            int ii=2;
            while(i<s.size()&& s[i]=='u'){
                if(ii<=1){long long temp=la2;la2+=la;la=temp;la2%=MOD;la%=MOD;}
                else ii--;
                i++;}
            ans*=la2;ans%=MOD;
        }
        else i++;
    }
    cout<<ans<<endl;
    return 0;
}