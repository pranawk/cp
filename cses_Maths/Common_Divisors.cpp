//  Common Divisors

#include<bits/stdc++.h>

using namespace std;
void fp(int n, unordered_map<int,int>&mp){
    int i=1;
    for( i=1; i*i<n; i++){
        if(n%i==0){mp[i]++; mp[n/i]++;}
    }
    //cout<<i<<endl;
    if(i*i==n)mp[i]++;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    int pp;
    for(int i=0; i<n; i++){
        cin>>pp;
        fp(pp,mp);
    }
    int ans=1;
    for(auto i:mp)if(i.second>1 && i.first>ans)ans=i.first;
    cout<<ans<<endl;
    return 0;
}
