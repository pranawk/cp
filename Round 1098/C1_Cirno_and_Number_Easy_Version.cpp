//  C1. Cirno and Number (Easy Version)

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        string a;
        int n;
        cin>>a>>n;
        char b1,b2;
        cin>>b1>>b2;
        string mx1,mn1;
        if(b1=='0')mx1+=b2;
        else mx1+=b1;
        for(int i=0; i<a.size(); i++)mx1+=b1;
        long long ans=abs(stoll(a)-stoll(mx1));
        if(a.size()>1){for(int i=0; i<a.size()-1; i++)mn1+=b2;
                ans=min(ans, abs(stoll(a)-stoll(mn1)));
        }
        string pp;
        vector<string>aa;
        for(int i=0; i<a.size(); i++){
            if(a[i]!=b1 && a[i]!=b2){
                string temp=pp+b1;
                if(a[i]>b1)while(temp.size()!=a.size())temp+=b2;
                else while(temp.size()!=a.size())temp+=b1;
                aa.push_back(temp);
                temp=pp+b2;
                if(a[i]<b2)while(temp.size()!=a.size())temp+=b1;
                else while(temp.size()!=a.size())temp+=b2;
                aa.push_back(temp);break;
            }
            if(a[i]==b1){
                string temp=pp+b2;
                if(a[i]<b2)while(temp.size()!=a.size())temp+=b1;
                else while(temp.size()!=a.size())temp+=b2;
                aa.push_back(temp);
                pp+=a[i];
            }
            if(a[i]==b2){
                string temp=pp+b1;
                if(a[i]>b1)while(temp.size()!=a.size())temp+=b2;
                else while(temp.size()!=a.size())temp+=b1;
                aa.push_back(temp);
                pp+=a[i];
            }
        }if(pp.size()!=0)aa.push_back(pp);
        for(int i=0; i<aa.size(); i++)ans=min(ans,abs(stoll(a)-stoll(aa[i])));
        cout<<ans<<endl;
    }
    return 0;
}