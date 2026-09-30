//  C. Given Length and Sum of Digits...

#include<bits/stdc++.h>

using namespace std;
string givp(int n, int sum){
    if(sum==0)return "-1";
    string ans;
    while(sum>=9){
        ans+='9';
        sum-=9;
    }
    if(ans.size()==n&&sum==0)return ans;
    ans+='0'+sum;
    while(ans.size()<n)ans+='0';
    if(ans.size()>n)return "-1";
    return ans;
}
string givn(int n, int sum){
    if(sum==0)return "-1";
    sum-=1;
    string ans;
    while(sum>=9){
        ans+='9';
        sum-=9;
    }
    if(ans.size()==n && sum==0){
        if(ans[n-1]=='9')return "-1";
        else ans[n-1]=ans[n-1]+1;
        return ans;}
    ans+='0'+sum;
    while(ans.size()<n)ans+='0';
    ans[n-1]+=1;
    if(ans.size()>n)return "-1";
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,s;
    cin>>m>>s;
    if(m==1 && s==0){
        cout<<0<<" "<<0<<endl;
        return 0;
        }
    string ans=givn(m,s);
    if(ans!="-1")reverse(ans.begin(),ans.end());
    cout<<ans<<" "<<givp(m,s);
    return 0;
}