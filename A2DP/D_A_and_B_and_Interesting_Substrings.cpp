//  D. A and B and Interesting Substrings

#include<bits/stdc++.h>

using namespace std;
int n;
// int solve(string &s, vector<)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>pts(26);
    for(int i=0; i<26; i++)cin>>pts[i];
    string s;
    cin>>s;
    n=s.size();
    long long cn=0;
    vector<unordered_map<long long,int>>mp(26);
    long long ans=0;
    for(int i=0; i<n; i++){
        int cc=s[i]-'a';
        ans+=(mp[cc][cn-pts[cc]]);
        mp[cc][cn]++;
        cn+=pts[cc];
    }
    cout<<ans;
    return 0;
}