//  B. Sum of Digits

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s.size()==1){cout<<0<<endl;return 0;}
    int sum=0;
    for(int i=0; i<s.size(); i++){
        sum+=s[i]-'0';
    }
    int ssum,ans=1;
    while(sum>9){
        ssum=0;
        while(sum>0){
            ssum+=sum%10;
            sum/=10;
        }
        ans++;
        sum=ssum;
    }
    cout<<ans<<endl;
    return 0;
}