#include<bits/stdc++.h>
using namespace std;
void bitcon(string &s, unsigned n){
    while(n>0){
        s+=n%16+'a';
        n/=16;
    }
    s+='z';
}
string encrypt(unsigned n, vector<int>nums){
    string s;
    for(unsigned i=0; i<n; i++){bitcon(s,nums[i]);}
    return s;
}
unsigned numcon(string s){
    unsigned ans=0;
    for(int i=s.size()-1; i>=0; i--){
        ans=ans*16+(s[i]-'a');
    }
    return ans;
}
void decrypt(string s,vector<int>&ans){
    for(size_t i=0; i<s.size(); ){
        string ss;
        while(i<s.size()&& s[i]!='z'){ss+=s[i];i++;}
        ans.push_back(numcon(ss));
        if(s[i]=='z')i++;
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
        //vector<int>nums;
        //int n=10000;
        //for(int i=0; i<10000; i++)nums.push_back(1000000000);
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