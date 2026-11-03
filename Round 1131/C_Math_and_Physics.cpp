//  C. Math and Physics

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
        vector<int>a(n);
        int cn=0;
        for(int i=0; i<n; i++){cin>>a[i];if(a[i]!=1)cn++;}
        if(cn==0){cout<<-1<<endl; continue;}
        else if(cn==1 && (a[0]!=1 || a[n-1]!=1)){
            cout<<max(a[0],a[n-1])<<endl;
            continue;
        }
        else if(cn==2 && a[0]!=1 && a[n-1]!=1){
            cout<<a[0]+a[n-1]-1<<endl;
            continue;
        }
        int ans=0;
        for(int i=0; i<n; i++)ans+=a[i];

        ans--;
        cout<<ans<<endl;
    }
    return 0;
}