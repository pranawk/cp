//  B. Lucky Numbers (easy)

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    cin>>n;
    if((n.size())%2==1){
        int ans=4;
        for(int i=0; i<cn/2; i++)ans=ans*10+4;
        for(int i=cn/2; i<cn; i++)ans=ans*10+7;
        cout<<ans<<endl;
    }
    else{
        int ans=0;
        bool bg=false;
        for(int i=0; i<n.size(); i++){

        }
    }
    return 0;
}
for(int i=0; i<n; i++)cin>>a[i];