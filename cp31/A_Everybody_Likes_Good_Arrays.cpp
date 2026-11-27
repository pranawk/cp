//  A. Everybody Likes Good Arrays!

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
        bool ev=false;
        int temp, ans=0;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(i!=0){
                if(temp%2==1 && ev==false)ans++;
                if(temp%2==0 && ev==true)ans++;
            }
            ev=(temp%2==0);
        }
        cout<<ans<<'\n';
    }
    return 0;
}