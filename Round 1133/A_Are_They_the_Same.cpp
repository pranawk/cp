//  A. Are They the Same?

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        int ec1=0,ec2=0,oc1=0,oc2=0, temp;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp%2==0)ec1++;
            else oc1++;
        }
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp%2==0)ec2++;
            else oc2++;
        }
        if((oc1>=oc2 && k%2==0) || (ec1>=ec2 && k%2==1))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}