//  B. Sequence Decreasing

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
        int temp;
        int mn=INT_MAX;
        for(int i=0; i<n; i++){
            cin>>temp;
            mn=min(mn,temp);
        }
        if(mn<n)cout<<n<<endl;
        else cout<<0<<endl;
    }
    return 0;
}