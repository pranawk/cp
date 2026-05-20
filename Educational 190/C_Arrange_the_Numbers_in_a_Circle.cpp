//  C. Arrange the Numbers in a Circle

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        vector<long long>c(n);
        for(int i=0; i<n; i++)cin>>c[i];
        if(n==1 && c[0]<3){cout<<0<<endl;continue;}
        long long oc=0;
        long long ans=0;
        long long occ=0;
        int cnn=0;
        for(int i=0; i<n; i++){
            if(c[i]==1)oc++;
            else {
                cnn++;
                ans+=c[i];
                occ+=c[i]/2-1;
            }
        }
        if(cnn==1)occ++;
        ans+=min(occ,oc);
        cout<<ans<<endl;
    }
    return 0;
}