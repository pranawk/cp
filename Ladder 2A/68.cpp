//Diversity
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    if(n>s.size())cout<<"impossible"<<endl;
    else{
        vector<bool>alpha(26,false);
        for(int i=0; i<s.size(); i++)alpha[s[i]-'a']=true;
        int cn=0;
        for(int i=0; i<26; i++)if(alpha[i]==true)cn++;
        if(cn>=n)cout<<0<<endl;
        else cout<<n-cn<<endl;
    }
    return 0;
}