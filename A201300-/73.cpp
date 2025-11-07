#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string ans;
    bool zf=false;
    for(size_t i=0; i<s.size(); i++){
        if(s[i]=='0'&& zf==false){zf=true;continue;}
        ans+=s[i];
    }
    if(zf==false)ans.erase(ans.length()-1);
    cout<<ans<<endl;
    return 0;
}