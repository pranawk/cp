//  B. Impost or Sus

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        string s2;
        int count=0;
        for(int i=0; i<s.size(); ){
            if((i==0||i==s.size()-1)&&s[i]=='u'){s[i]='s';count++;i++;continue;}
            if(s[i]=='s'){i++;continue;}
            if(s[i]=='u'&&s[i+1]=='u'){s[i+1]='s'; count++; i+=2; continue;}
            else i++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}
