//  A. String Task

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string ans;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' ||s[i]=='i' || s[i]=='I' ||
            s[i]=='o' || s[i]=='O' ||s[i]=='u' || s[i]=='U' || s[i]=='y' || s[i]=='Y')continue;
        if(s[i]>='A' && s[i]<='Z'){
            ans+='.';
            ans+=s[i]-'A'+'a';
        }
        if(s[i]>='a' && s[i]<='z'){
            ans+='.';
            ans+=s[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}