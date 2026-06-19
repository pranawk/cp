// B. Annoying the Ghost
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
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int j=0; j<n; j++)cin>>b[j];
        int ans=0;
        bool fl=true;
        for(int i=0; i<n; i++){
            int j;
            for(j=i; j<n; j++){
                if(a[j]<=b[i]){
                    ans+=j-i;
                    for(int k=j; k>i; k--){
                        swap(a[k],a[k-1]);
                    }
                    break;
                }
            }
            if(j==n){fl=false;break;}
        }
        if(fl==false){cout<<-1<<endl;continue;}
        cout<<ans<<endl;
    }
    return 0;
}