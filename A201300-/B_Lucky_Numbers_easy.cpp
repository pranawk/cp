//  B. Lucky Numbers (easy)

#include<bits/stdc++.h>

using namespace std;
void rev(int &a){
    int c=0;
    while(a>0){c=c*10+a%10;a/=10;}
    a=c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int cn=0,nn=n;
    while(nn>0){cn++;nn/=10;}
    nn=n;
    if(cn%2==1){
        int ans=4;
        for(int i=0; i<cn/2; i++)ans=ans*10+4;
        for(int i=cn/2; i<cn; i++)ans=ans*10+7;
        cout<<ans<<endl;
    }
    else{
        bool bg=false;
        rev(nn);
        int ans;
        if(n%10<=4){ans=4;}
        if(n%10==7)
        for(int )
    }
    return 0;
}