#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    string s;
    cin>>a>>b>>s;
    unordered_map<int,int>mp;
    for(size_t i=0; i<a.size(); i++){
        mp.insert({a[i]-'a', b[i]-'a'});
    }
    string ans;
    for(size_t i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9')ans+=s[i];
        else if(s[i]>='a' && s[i]<='z')ans+=mp[s[i]-'a']+'a';
        else if(s[i]>='A' && s[i]<='Z')ans+=mp[s[i]-'A']+'A';
    }
    cout<<ans<<endl;
    return 0;
}