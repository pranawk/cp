#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    if(k>36)cout<<-1;
    else{
        long long ans=0;
        if(k%2==1){ans=4;k--;}
        while(k>0){
            ans=ans*10+8; k-=2;
        }
        cout<<ans<<endl;
    }
return 0;
}
