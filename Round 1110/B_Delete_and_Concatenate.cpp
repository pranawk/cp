//  B. Delete and Concatenate

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,c;
        cin>>n>>c;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        long long ans=0;
        sort(a.begin(),a.end());
        int ii=0;
        for( ii=0; ii<n/2; ii++){
            if(a[ii]>=c){break;}
        }
        int j=ii-1;
        //cout<<ii<<" ";
        for(int i=ii; i<n; i++){
            if(j>=0){j--;}
            ans+=a[i];
            ans-=c;
        }
        cout<<ans<<endl;
    }
    return 0;
}