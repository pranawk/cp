//  B. New Skateboard

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    long long ans=0;
    int pn=s[0]-'0';
    if (pn%4==0)ans++;
    for (int i=1; i<n; i++)
    {
        if ((s[i]-'0')%4==0)ans++;
        if ((pn*10+s[i]-'0')%4==0)ans+=(i);
        pn=s[i]-'0';
    }
    cout<<ans;
    return 0;
}