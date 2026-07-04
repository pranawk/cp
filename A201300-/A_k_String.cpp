//  A. k-String

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<s<<endl;
        return 0;
    }
    vector<int>alpha(26,0);
    for(int i=0; i<s.size(); i++)alpha[s[i]-'a']++;
    string s2;
    bool fl=true;
    for(int i=0; i<26; i++){
        if(alpha[i]%n==0){
            for(int j=0; j<alpha[i]/n; j++)s2+= i+'a';
        }
        else fl=false;
    }
    string s3=s2;
    for(int i=0; i<n-1; i++)s2+=s3;
    cout<<(fl==true ? s2 : "-1")<<endl;
    return 0;
}