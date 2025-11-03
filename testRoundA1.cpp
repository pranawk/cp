#include<bits/stdc++.h>
using namespace std;
string encrypt(unsigned n, vector<int>nums){
    string s;
    for(unsigned i=0; i<n; i++){s+=nums[i]-1+'a';}
    return s;
}
void decrypt(string s,vector<int>&ans){
    for(size_t i=0; i<s.size(); i++){
        ans.push_back(s[i]-'a'+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s=="first"){
        int n;cin>>n;
        vector<int>nums(n);
        for(unsigned i=0; i<n; i++)cin>>nums[i];
        cout<<encrypt(n, nums)<<endl;
        return 0;
    }
    if(s=="second"){
        string ss;
        cin>>ss;
        vector<int>ans;
        decrypt(ss,ans);
        cout<<ans.size()<<endl;
        for(auto i: ans)cout<<i<<" ";
        cout<<endl;
        return 0;
    }
    return 0;
}