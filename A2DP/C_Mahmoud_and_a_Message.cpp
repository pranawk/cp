//  C. Mahmoud and a Message

#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
int n;
int mx=0;
int ccc=INT_MAX;
pair<int,int>dp[1001];
pair<int,int> solve(vector<int>&mxa, string & s,  int ii, int cl, int cn){
    if(ii==n){return {1,0};}
    int cc=s[ii]-'a';
    cn=min(cn,mxa[cc]);
    if(cn<cl)return {0,0};
    mx=max(mx,cl);
    if(cl==cn){
        if(dp[ii+1].first==-1)dp[ii+1]=solve(mxa,s,ii+1,1,INT_MAX);
        pair<int,int>temp=dp[ii+1];
        temp.second++;
        return temp;
    }
    if(ii+1==n){return {1,1};}
    if(dp[ii+1].first==-1)dp[ii+1]=solve(mxa,s,ii+1,1,INT_MAX);
    pair<int,int>temp=dp[ii+1];
    temp.second++;
    pair<int,int>t2=solve(mxa,s,ii+1,cl+1,cn);
    int sec;
    if(temp.first!=0 && t2.first!=0)sec=min(temp.second,t2.second);
    else{
        sec=max(t2.second,temp.second);
    }
    return {(temp.first+t2.first)%MOD, sec};
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    string s;
    cin>>s;
    vector<int>mxa(26);
    for(int i=0; i<26; i++){
        cin>>mxa[i];
    }
    for(int i=0; i<1001; i++)dp[i].first=-1;
    pair<int,int>temp=solve(mxa,s,0,1,INT_MAX);
    cout<<temp.first<<endl;
    cout<<mx<<endl;
    cout<<temp.second;
    return 0;
}