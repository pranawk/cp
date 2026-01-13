//  A. Social Experiment

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        if(n==2|| n==3){cout<<n<<endl;continue;}
        if(n%2==0){cout<<0<<endl;}
        else cout<<1<<endl;
    }
    return 0;
}