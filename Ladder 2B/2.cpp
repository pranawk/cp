//Decoding
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    int ss=n;
    for(int i=0; i<n; i++){
        if(ss%2==0)ans= s[i]+ans;
        else ans= ans+s[i];
        ss--;
    }
    cout<<ans<<endl;
    return 0;
}